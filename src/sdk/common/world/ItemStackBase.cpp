#include "ItemStackBase.h"

#include "pch.h"

std::string SDK::ItemStackBase::getHoverName() {
    return "";
    std::string out;
    reinterpret_cast<std::string*(__fastcall*)(ItemStackBase*, std::string*
    )>(Signatures::ItemStackBase_getHoverName.result)(this, &out);
    return out;
}
