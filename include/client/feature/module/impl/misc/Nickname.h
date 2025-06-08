#pragma once
#include <sdk/common/network/packet/TextPacket.h>

#include "../../Module.h"

class Nickname: public Module {
  public:
    Nickname();
    virtual ~Nickname() = default;

    void onClientTextPacket(Event& evG);

  private:
    ValueType nickname = TextValue(L"Nickname");
};