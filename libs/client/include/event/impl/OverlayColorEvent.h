#pragma once
#include "api/eventing/Event.h"
#include "sdk/common/world/actor/Actor.h"
#include "util/FNV32.h"
#include "util/Util.h"

// FIXME: is this really cancellable?
class OverlayColorEvent: public Cancellable {
  public:
    static const uint32_t hash = TOHASH(OverlayColorEvent);

    [[nodiscard]]
    Color& getColor() {
        return *color;
    }

    [[nodiscard]]
    SDK::Actor* getActor() {
        return actor;
    }

    OverlayColorEvent(Color& color, SDK::Actor* actor) :
        color(&color),
        actor(actor) {}

  protected:
    Color* color;
    SDK::Actor* actor;
};
