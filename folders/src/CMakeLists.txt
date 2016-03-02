
add_subdirectory(mod1)

add_executable(Folders main.cpp)

target_link_libraries(Folders Mod1)
