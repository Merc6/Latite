#pragma once
#include <unordered_map>

#include "../../HUDModule.h"
#include "util/Math.h"

class Minimap: public HUDModule {
  public:
    Minimap();

  private:
    struct IBlock {};

    std::unordered_map < BlockPos,

        void scanChunks();
    void onUpdate(Event& ev);
};