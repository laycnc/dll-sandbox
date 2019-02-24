project(application)


add_executable(${PROJECT_NAME} private/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/private)

target_link_libraries(${PROJECT_NAME} library2)

set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})