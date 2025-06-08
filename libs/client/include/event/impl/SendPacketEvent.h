#pragma once
#include <sdk/common/network/Packet.h>

#include "api/eventing/Event.h"
#include "util/FNV32.h"

class SendPacketEvent: public Cancellable {
  public:
    static const uint32_t hash = TOHASH(SendPacketEvent);

    [[nodiscard]]
    SDK::Packet* getPacket() {
        return packet;
    }

    SendPacketEvent(SDK::Packet* pkt) : packet(pkt) {}

  protected:
    SDK::Packet* packet;
};
