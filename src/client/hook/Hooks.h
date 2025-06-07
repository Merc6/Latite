#pragma once
#include "Hook.h"
#include "api/manager/StaticManager.h"
#include "impl/DXHooks.h"
#include "impl/GeneralHooks.h"
#include "impl/LevelRendererHooks.h"
#include "impl/MinecraftGameHooks.h"
#include "impl/OptionHooks.h"
#include "impl/PacketHooks.h"
#include "impl/PlayerHooks.h"
#include "impl/RenderControllerHooks.h"
#include "impl/ScreenViewHooks.h"

class LatiteHooks final:
    public StaticManager<
        HookGroup,
        GenericHooks,
        LevelRendererHooks,
        OptionHooks,
        DXHooks,
        PlayerHooks,
        MinecraftGameHooks,
        RenderControllerHooks,
        ScreenViewHooks,
        PacketHooks> {
  public:
    LatiteHooks();
    ~LatiteHooks();

    void enable();
    void disable();

  private:
};