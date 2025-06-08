#pragma once
#include "api/eventing/Event.h"
#include "sdk/common/entity/component/MoveInputComponent.h"
#include "util/FNV32.h"

class AfterMoveEvent: public Event {
  public:
    static const uint32_t hash = TOHASH(AfterMoveEvent);

    [[nodiscard]]
    SDK::MoveInputComponent* getMoveInputHandler() {
        return handler;
    }

    AfterMoveEvent(SDK::MoveInputComponent* handler) : handler(handler) {}

  protected:
    SDK::MoveInputComponent* handler;
};
