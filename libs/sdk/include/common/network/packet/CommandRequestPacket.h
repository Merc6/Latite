#pragma once
#include "../Packet.h"
#include "sdk/String.h"
#include "sdk/Util.h"

namespace SDK {
// LeviLamina
class mcUUID {
  public:
    uint64_t mostSig, leastSig;
};

enum class CommandOriginType : int8_t {
    Player = 0x0,
    CommandBlock = 0x1,
    MinecartCommandBlock = 0x2,
    DevConsole = 0x3,
    Test = 0x4,
    AutomationPlayer = 0x5,
    ClientAutomation = 0x6,
    DedicatedServer = 0x7,
    Entity = 0x8,
    Virtual = 0x9,
    GameArgument = 0xA,
    EntityServer = 0xB,
    Precompiled = 0xC,
    GameDirectorEntityServer = 0xD,
    Scripting = 0xE,
    ExecuteContext = 0xF,
};

class CommandOriginData {
  public:
    CommandOriginType type;
    mcUUID uuid;
    std::string requestId;
    int64_t playerId;
};

class CommandRequestPacket: public Packet {
  public:
    std::string command;
    CommandOriginData origin;
    bool InternalSource;

    void applyCommand(std::string const& command);
};
} // namespace SDK
