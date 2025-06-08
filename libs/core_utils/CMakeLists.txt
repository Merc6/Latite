
add_library(Latite.core.utils STATIC
	src/paths.cc
	src/logger.cc

	include/paths.cc
	include/logger.cc
)

target_include_directories(Latite.core.utils PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
)
