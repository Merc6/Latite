#pragma once
#include "RemappingLayout.h"
#include "sdk/Util.h"

namespace SDK {
class ClientInputMappingFactory {
  public:
    CLASS_FIELD(KeyboardLayout*, defaultKeyboardLayout, 0x140);
};

class ClientInputHandler {
  public:
    MVCLASS_FIELD(
        ClientInputMappingFactory*,
        mappingFactory,
        0x28,
        0x20,
        0x20,
        0x20,
        0x20,
        0x20,
        0x18,
        0x18
    ); // ClientInputHandler::getMappingFactory
};
} // namespace SDK