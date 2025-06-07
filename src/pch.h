#ifndef PCH_H
#define PCH_H

// Put commonly included files here to speed up the build process

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#include <Windows.h>

#include <array>
#include <chrono>
#include <execution>
#include <filesystem>
#include <format>
#include <fstream>
#include <future>
#include <iostream>
#include <memory>
#include <optional>
#include <sstream>
#include <string>
#include <string_view>

using namespace std::chrono_literals;

// COM
#include <d2d1.h>
#include <d3d11.h>
#include <d3d11on12.h>
#include <d3d12.h>

// WinRT

#include <winrt/Windows.ApplicationModel.Core.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Web.Http.Headers.h>
#include <winrt/Windows.Web.Http.h>
#include <winrt/base.h>
#include <winrt/windows.foundation.collections.h>
#include <winrt/windows.security.cryptography.core.h>
#include <winrt/windows.security.cryptography.h>
#include <winrt/windows.system.h>

// SDK
#include "sdk/Version.h"
#include "sdk/common/client/game/ClientInstance.h"
#include "sdk/common/client/game/MinecraftGame.h"
#include "sdk/common/client/gui/GuiData.h"
#include "sdk/common/client/player/LocalPlayer.h"
#include "sdk/common/network/RakNetConnector.h"
#include "sdk/common/world/Minecraft.h"
#include "sdk/common/world/level/Dimension.h"
#include "sdk/misc/ClickMap.h"
#include "sdk/signature/storage.h"

// Client
#include "client/Latite.h"
#include "client/event/Events.h"
#include "client/hook/Hook.h"
#include "client/misc/ClientMessageQueue.h"
#include "client/misc/Timings.h"
#include "client/script/JsPlugin.h"
#include "client/script/PluginManager.h"
#include "client/ui/TextBox.h"

// API
#include "api/eventing/Event.h"
#include "api/eventing/EventManager.h"
#include "api/eventing/Listenable.h"
#include "api/feature/Feature.h"
#include "api/feature/command/Command.h"
#include "api/feature/command/CommandManager.h"
#include "api/feature/module/Module.h"
#include "api/feature/module/ModuleManager.h"
#include "api/feature/setting/Setting.h"
#include "api/feature/setting/SettingGroup.h"
#include "api/manager/FeatureManager.h"
#include "api/manager/Manager.h"
#include "api/manager/StaticManager.h"
#include "api/memory/memory.h"
#include "api/scanner/scanner.h"

// Features
#include "client/feature/command/Command.h"
#include "client/feature/command/CommandManager.h"
#include "client/feature/module/HUDModule.h"
#include "client/feature/module/Module.h"
#include "client/feature/module/ModuleManager.h"
#include "client/feature/module/TextModule.h"

// Utils
#include "util/ChakraUtil.h"
#include "util/DxContext.h"
#include "util/DxUtil.h"
#include "util/FNV32.h"
#include "util/Json.h"
#include "util/LMath.h"
#include "util/Logger.h"
#include "util/Util.h"
#include "util/XorString.h"
#endif