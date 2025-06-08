#include "Hooks.h"

#include <vhook/vtable_hook.h>

#include "MinHook.h"
#include "impl/DXHooks.h"
#include "impl/GeneralHooks.h"
#include "impl/LevelRendererHooks.h"
#include "impl/MinecraftGameHooks.h"
#include "impl/OptionHooks.h"
#include "impl/PacketHooks.h"
#include "impl/RenderControllerHooks.h"
#include "impl/ScreenViewHooks.h"
#include "pch.h"

using namespace std::chrono_literals;

LatiteHooks::LatiteHooks() {}

LatiteHooks::~LatiteHooks() {
    MH_Uninitialize();
}

void LatiteHooks::enable() {
    MH_EnableHook(MH_ALL_HOOKS);
}

void LatiteHooks::disable() {
    MH_DisableHook(MH_ALL_HOOKS);
    vh::unhook_all();
}
