#include "FPSCounter.h"

#include "client/Latite.h"
#include "pch.h"

FPSCounter::FPSCounter() :
    TextModule(
        "FPS",
        LocalizeString::get("client.textmodule.fpsCounter.name"),
        LocalizeString::get("client.textmodule.fpsCounter.desc"),
        HUD
    ) {
    this->prefix = TextValue(L"FPS: ");
}

std::wstringstream FPSCounter::text(bool isDefault, bool inEditor) {
    std::wstringstream wss;
    wss << Latite::get().getTimings().getFPS();
    return wss;
}
