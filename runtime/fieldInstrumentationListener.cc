#include "fieldInstrumentationListener.h"

#include "mirror/object.h"

namespace art {

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
}