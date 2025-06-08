
add_library(Latite.core.utils STATIC
	src/paths.cc
	src/log.cc

	include/paths.hh
	include/log.hh
)

target_include_directories(Latite.core.utils PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
)
