project(library2)

file(GLOB_RECURSE LIB2_SOURCES *.cpp)
file(GLOB_RECURSE LIB2_HEADERS *.h)

if( ${BUILD_TYPE} STREQUAL "STATIC" )
	add_library(${PROJECT_NAME} STATIC ${LIB2_HEADERS} ${LIB2_SOURCES})
	target_compile_definitions(${PROJECT_NAME} PUBLIC LIBRARY2_STATIC=1)
else()
	add_library(${PROJECT_NAME} SHARED ${LIB2_HEADERS} ${LIB2_SOURCES})
	target_compile_definitions(${PROJECT_NAME} PRIVATE LIBRARY2_EXPORT=1)
endif()

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/private)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public)
target_link_libraries(${PROJECT_NAME} PRIVATE library1)