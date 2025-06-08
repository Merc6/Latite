#include "CommandRequestPacket.h"

#include "pch.h"
#include "sdk/Util.h"

void SDK::CommandRequestPacket::applyCommand(std::string const& command) {
    this->origin.type = CommandOriginType::Player;
    this->command = command;
    this->InternalSource = true;
}
