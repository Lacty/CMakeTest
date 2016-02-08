
include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/include/freetype)

file(GLOB HEAD *.h *.hpp)
file(GLOB SRCS *.c *.cpp)

add_executable(hoge ${SRCS} ${HEAD})

set(EXTRA_LIBS
    ${CMAKE_SOURCE_DIR}/lib/Windows/lib/OpenGL32.lib
    ${CMAKE_SOURCE_DIR}/lib/Windows/lib/freetyped.lib
    ${CMAKE_SOURCE_DIR}/lib/Windows/lib/ftgld.lib
    ${CMAKE_SOURCE_DIR}/lib/Windows/lib/glfw3d.lib
    ${CMAKE_SOURCE_DIR}/lib/Windows/lib/AntTweakBar64.lib)

target_link_libraries(hoge ${EXTRA_LIBS})
