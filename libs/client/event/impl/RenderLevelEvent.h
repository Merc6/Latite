#pragma once
#include "api/eventing/Event.h"
#include "sdk/common/client/renderer/game/LevelRenderer.h"
#include "util/FNV32.h"

class RenderLevelEvent: public Event {
  public:
    static const uint32_t hash = TOHASH(RenderLevelEvent);

    [[nodiscard]]
    SDK::LevelRenderer* getLevelRenderer() {
        return rend;
    }

    [[nodiscard]]
    SDK::ScreenContext* getScreenContext() {
        return screen;
    }

    RenderLevelEvent(SDK::LevelRenderer* rend, SDK::ScreenContext* ctx) :
        rend(rend),
        screen(ctx) {}

  private:
    SDK::LevelRenderer* rend;
    SDK::ScreenContext* screen;
};