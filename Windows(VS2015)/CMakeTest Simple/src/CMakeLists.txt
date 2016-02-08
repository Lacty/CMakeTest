
set(CMAKE_C_FLAGS "-Wall")

file(GLOB SRCS *.cpp)

add_executable(hoge ${SRCS})
