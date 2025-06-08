#include "UIControl.h"

#include "pch.h"
#include "sdk/signature/storage.h"

void SDK::UIControl::updatePos() {
    flags |= 1;
    reinterpret_cast<void (*)(UIControl*)>(Signatures::UIControl_getPosition
                                               .result)(this);
}
