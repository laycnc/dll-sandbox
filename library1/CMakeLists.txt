project(library1)


file(GLOB_RECURSE LIB1_SOURCES *.cpp)
file(GLOB_RECURSE LIB1_HEADERS *.h)

if( ${BUILD_TYPE} STREQUAL "STATIC" )
	add_library(${PROJECT_NAME} STATIC ${LIB1_HEADERS} ${LIB1_SOURCES})
	target_compile_definitions(${PROJECT_NAME} PUBLIC LIBRARY1_STATIC=1)
else()
	add_library(${PROJECT_NAME} SHARED ${LIB1_HEADERS} ${LIB1_SOURCES})
	target_compile_definitions(${PROJECT_NAME} PRIVATE LIBRARY1_EXPORT=1)
endif()

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/private)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public)