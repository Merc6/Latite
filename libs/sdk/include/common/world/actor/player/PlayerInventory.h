#pragma once
#include "Inventory.h"
#include "sdk/Util.h"

namespace SDK {
class PlayerInventory {
  public:
    CLASS_FIELD(int, selectedSlot, 0x10);
    MVCLASS_FIELD(Inventory*, inventory, 0xB8, 0xC0, 0xC0, 0xC0, 0xB0, 0xC0);
};
} // namespace SDK