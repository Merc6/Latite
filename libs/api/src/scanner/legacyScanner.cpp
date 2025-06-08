#include "Scanner.h"
#include "pch.h"
#include "util/Util.h"

uintptr_t
memory::findSignature(std::string_view signature, const char* module) {
    static auto pattern_to_byte = [](std::string_view pattern) {
        auto bytes = std::vector<std::optional<uint8_t>> {};
        auto start = const_cast<char*>(pattern.data());
        auto end = const_cast<char*>(pattern.data()) + pattern.size();
        bytes.reserve(pattern.size() / 2);

        for (auto current = start; current < end; ++current) {
            if (*current == '?') {
                ++current;
                if (*current == '?')
                    ++current;
                bytes.push_back(std::nullopt);
            } else
                bytes.push_back(
                    static_cast<uint8_t>(strtoul(current, &current, 16))
                );
        }
        return bytes;
    };

    // ...
    auto gameModule = reinterpret_cast<uintptr_t>(GetModuleHandleA(module));
    auto* const scanBytes = reinterpret_cast<uint8_t*>(gameModule);
    auto* const dosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(gameModule);
    auto* const ntHeaders =
        reinterpret_cast<PIMAGE_NT_HEADERS>(scanBytes + dosHeader->e_lfanew);
    const auto sizeOfCode = ntHeaders->OptionalHeader.SizeOfImage;

    const auto pattern = pattern_to_byte(signature);
    const auto end = scanBytes + sizeOfCode;

    auto it = std::search(
        std::execution::par,
        scanBytes,
        end,
        pattern.cbegin(),
        pattern.cend(),
        [](auto byte, auto opt) { return !opt.has_value() || *opt == byte; }
    );

    auto ret = it != end ? reinterpret_cast<uintptr_t>(it) : 0ull;
    return ret;
}

char* memory::findString(std::string_view find, const char* module) {
    auto gameModule = reinterpret_cast<uintptr_t>(GetModuleHandleA(module));
    auto* const scanBytes = reinterpret_cast<uint8_t*>(gameModule);
    auto* const dosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(gameModule);
    auto* const ntHeaders =
        reinterpret_cast<PIMAGE_NT_HEADERS>(scanBytes + dosHeader->e_lfanew);
    const auto sizeOfCode = ntHeaders->OptionalHeader.SizeOfImage;

    const auto end = scanBytes + sizeOfCode;

    auto it = std::search(
        std::execution::par,
        scanBytes,
        end,
        find.cbegin(),
        find.cend()
    );

    auto ret = it != end ? reinterpret_cast<char*>(it) : 0ull;
    return ret;
}
