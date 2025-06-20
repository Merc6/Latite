#include "TextPacket.h"

#include "api/memory/Memory.h"
#include "pch.h"
#include "sdk/common/client/game/ClientInstance.h"
#include "sdk/common/client/game/MinecraftGame.h"
#include "sdk/common/client/player/LocalPlayer.h"
#include "sdk/signature/storage.h"

void SDK::TextPacket::chat(std::string const& message) {
    this->str = message;
    this->source = SDK::ClientInstance::get()->getLocalPlayer()->playerName;
    this->xboxUserId = SDK::ClientInstance::get()->minecraftGame->xuid;
    this->type = TextPacketType::CHAT;
}
