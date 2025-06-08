
add_library(Latite.util STATIC
	src/ChakraUtil.cpp
	src/DrawUtil3D.cpp
	src/DxContext.cpp
	src/DxUtil.cpp
	src/Logger.cpp
	src/Util.cpp

	include/ChakraUtil.h
	include/DrawUtil3D.h
	include/DxContext.h
	include/DxUtil.h
	include/FNV32.h
	include/Json.h
	include/LMath.h
	include/Loggers.h
	include/Util.h
	include/XorString.h
)

target_include_directories(Latite.util PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
)
