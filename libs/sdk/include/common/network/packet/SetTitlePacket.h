#pragma once
#include "../Packet.h"
#include "sdk/String.h"
#include "sdk/Util.h"

namespace SDK {
enum class TitleType {
    Clear = 0,
    Reset = 1,
    Title = 2,
    Subtitle = 3,
    Actionbar = 4,
    Times = 5,
    TitleRaw = 6,
    SubtitleRaw = 7,
    ActionbarRaw = 8,
};

class SetTitlePacket: public Packet {
  public:
    alignas(8) TitleType type;
    String text;
};
} // namespace SDK