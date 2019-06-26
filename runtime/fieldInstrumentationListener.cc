#include "fieldInstrumentationListener.h"

#include "mirror/object.h"
#include "art_method-inl.h"

namespace art {

#ifdef ART_TARGET_ANDROID
static const char* kLogPrefix = "/data/misc/trace";
#else
static const char* kLogPrefix = "/tmp";
#endif

void FieldInstrumentationListener::FieldRead(Thread* thread, Handle<mirror::Object> this_object,
                                             ArtMethod* method, uint32_t dex_pc, ArtField* field) {
  if (field->IsStatic()) {
    DCHECK(this_object.IsNull()) << "Read a static field, but object is not null.";
  } else {
    DCHECK(this_object.IsNull() == false);
    this_object.Get()->readCount_++;
  }
}

void FieldInstrumentationListener::FieldWritten(Thread* thread, Handle<mirror::Object> this_object,
                                                ArtMethod* method, uint32_t dex_pc, ArtField* field,
                                                const JValue& field_value) {
  if (field->IsStatic()) {
    DCHECK(this_object.IsNull()) << "Write a static field, but object is not null.";
  } else {
    DCHECK(this_object.IsNull() == false);
    this_object.Get()->writeCount_++;
  }
}

void FieldInstrumentationListener::LogObjectAllocation(art::mirror::Object* obj, art::ArtMethod* method, uint32_t dex_pc) {

  time_t n = time(nullptr);
  struct tm* local = localtime(&n);
  char strTime[80];
  strftime(strTime, 80, "%Y-%m-%d %H:%M:%S", local);

  const char* fileName = method->GetDeclaringClassSourceFile();

  PROFILE_LOG(" Object " << obj->IdentityHashCode() << " (" << obj->GetClass()->PrettyDescriptor() << ") is allocated at "
      << method->PrettyMethod(false) << "(" << (fileName == nullptr ? "NO SOURCE FILE" : fileName) << ":" << method->GetLineNumFromDexPC(dex_pc) << ")");
}


void FieldInstrumentationListener::OpenPerfLog() {
  std::string pid_str = std::to_string(getpid());
  time_t n = time(nullptr);
  struct tm* local = localtime(&n);
  char strTime[80];
  strftime(strTime, 80, "%Y-%m-%d %H-%M-%S", local);
  std::string perf_filename = std::string(kLogPrefix) + "/nvm-" + strTime + "-" + pid_str + ".log";

  if(log.is_open()) {
    log.close();
  }

  log = std::ofstream(perf_filename.c_str());
  if (log.is_open())
    LOG(INFO) << "Field instrumentation log is created at " << perf_filename;
  else
    LOG(WARNING) << "Error in opening field instrumentation log at " << perf_filename;
}

void FieldInstrumentationListener::ClosePerfLog() {
  if (log.is_open()) {
    log.close();
  }
}
}