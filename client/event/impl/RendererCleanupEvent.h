#pragma once
#include "api/eventing/Event.h"
#include "util/DXUtil.h"
#include "util/FNV32.h"

class RendererCleanupEvent: public Event {
  public:
    static const uint32_t hash = TOHASH(RendererCleanupEvent);

    RendererCleanupEvent() {};

  private:
};