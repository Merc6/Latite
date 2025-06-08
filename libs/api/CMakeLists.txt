
add_library(Latite.api STATIC
	src/config/Config.cpp
	src/feature/setting/Setting.cpp
	src/memory/signature/signature.cpp
	src/memory/memory.cpp
	src/scanner/legacyScanner.cpp

	include/config/Config.h
	include/config/ConfigManager.h
	include/eventing/Event.h
	include/eventing/EventManager.h
	include/eventing/Listenable.h
	include/feature/command/Command.h
	include/feature/command/CommandManager.h
	include/feature/module/Module.h
	include/feature/module/ModuleManager.h
	include/feature/setting/Setting.h
	include/feature/setting/SettingGroup.h
	include/feature/Feature.h
	include/manager/FeatureManager.h
	include/manager/Manager.h
	include/manager/StaticManager.h
	include/memory/signature/signature.h
	include/memory/memory.h
	include/scanner/Scanner.h
)

target_include_directories(Latite.api PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
)
