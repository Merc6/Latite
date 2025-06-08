#pragma once
#include <cstdint>
#include <string_view>

namespace memory {
extern uintptr_t findSignature(std::string_view signature, const char* module);
extern char* findString(std::string_view find, const char* module);
} // namespace memory