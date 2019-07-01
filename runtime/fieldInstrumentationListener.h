#ifndef ART_RUNTIME_FIELDINSTRUMENTATIONLISTENER_H
#define ART_RUNTIME_FIELDINSTRUMENTATIONLISTENER_H

#include <fstream>
#include "instrumentation.h"
#include "art_field.h"
#include "handle.h"

namespace art {

#define PROFILE_LOG(x) LOG(INFO) << "[PROFILE_LOG] " << x


//use public inheritance, that doesn't change accessors of members of the super class.
class FieldInstrumentationListener final : public instrumentation::InstrumentationListener {
 public:

  virtual ~FieldInstrumentationListener() {
    ClosePerfLog();
  }

  // Call-back for when a method is entered.
  void MethodEntered(Thread* thread,
                     Handle<mirror::Object> this_object,
                     ArtMethod* method,
                     uint32_t dex_pc)
  override REQUIRES_SHARED(Locks::mutator_lock_) {}

//  void MethodExited(Thread* thread,
//                    Handle<mirror::Object> this_object,
//                    ArtMethod* method,
//                    uint32_t dex_pc,
//                    Handle<mirror::Object> return_value)
//  override REQUIRES_SHARED(Locks::mutator_lock_) {}

  // Call-back for when a method is exited. The implementor should either handler-ize the return
  // value (if appropriate) or use the alternate MethodExited callback instead if they need to
  // go through a suspend point.
  void MethodExited(Thread* thread,
                    Handle<mirror::Object> this_object,
                    ArtMethod* method,
                    uint32_t dex_pc,
                    const JValue& return_value)
  override REQUIRES_SHARED(Locks::mutator_lock_) {}

  // Call-back for when a method is popped due to an exception throw. A method will either cause a
  // MethodExited call-back or a MethodUnwind call-back when its activation is removed.
  void MethodUnwind(Thread* thread,
                    Handle<mirror::Object> this_object,
                    ArtMethod* method,
                    uint32_t dex_pc)
  override REQUIRES_SHARED(Locks::mutator_lock_) {}

  // Call-back for when the dex pc moves in a method.
  void DexPcMoved(Thread* thread,
                  Handle<mirror::Object> this_object,
                  ArtMethod* method,
                  uint32_t new_dex_pc)
  override REQUIRES_SHARED(Locks::mutator_lock_) {}

  // Call-back for when we read from a field.
  void FieldRead(Thread* thread,
                 Handle<mirror::Object> this_object,
                 ArtMethod* method,
                 uint32_t dex_pc,
                 ArtField* field)
  override REQUIRES_SHARED(Locks::mutator_lock_);

//  void FieldWritten(Thread* thread,
//                    Handle<mirror::Object> this_object,
//                    ArtMethod* method,
//                    uint32_t dex_pc,
//                    ArtField* field,
//                    Handle<mirror::Object> field_value)
//  override REQUIRES_SHARED(Locks::mutator_lock_);

  // Call-back for when we write into a field.
  void FieldWritten(Thread* thread,
                    Handle<mirror::Object> this_object,
                    ArtMethod* method,
                    uint32_t dex_pc,
                    ArtField* field,
                    const JValue& field_value)
  override REQUIRES_SHARED(Locks::mutator_lock_);

  // Call-back when an exception is caught.
  void ExceptionCaught(Thread* thread,
                       Handle<mirror::Throwable> exception_object)
  override REQUIRES_SHARED(Locks::mutator_lock_) {}

  // Call-back for when we execute a branch.
  void Branch(Thread* thread,
              ArtMethod* method,
              uint32_t dex_pc,
              int32_t dex_pc_offset)
  override REQUIRES_SHARED(Locks::mutator_lock_) {}

  // Call-back for when we get an invokevirtual or an invokeinterface.
  void InvokeVirtualOrInterface(Thread* thread,
                                Handle<mirror::Object> this_object,
                                ArtMethod* caller,
                                uint32_t dex_pc,
                                ArtMethod* callee)
  override REQUIRES_SHARED(Locks::mutator_lock_) {}

  void LogObjectAllocation(art::mirror::Object* obj, art::ArtMethod* method, uint32_t dex_pc) REQUIRES_SHARED(Locks::mutator_lock_);

  void OpenPerfLog();

  void ClosePerfLog();

  void FieldRead_(mirror::Object* this_object, ArtField* field, const char* tag = "") REQUIRES_SHARED(Locks::mutator_lock_);

  void FieldWritten_(mirror::Object* this_object, ArtField* field, const JValue& field_value, const char* tag = "") REQUIRES_SHARED(Locks::mutator_lock_);

  std::ofstream log;
};
}

#endif //ART_RUNTIME_FIELDINSTRUMENTATIONLISTENER_H
