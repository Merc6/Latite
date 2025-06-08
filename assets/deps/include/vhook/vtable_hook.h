// github.com/Imrglop/SignatureScanner

#pragma once
#include <Windows.h>

#include <cstdint>
#include <string>

namespace vh {
int hook(LPVOID* pfpTarget, LPVOID pDetour, LPVOID* pOriginal = NULL);
int unhook(LPVOID* pfpTarget);
void unhook_all();
std::string status_to_string(int status);
} // namespace vh