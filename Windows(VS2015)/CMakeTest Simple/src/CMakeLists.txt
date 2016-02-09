
file(GLOB HEAD
  *.h *.hpp
  print/*.h print/*.hpp
)

file(GLOB SRCS
  *.c *.cpp
  print/*.c print/*.cpp
)

add_executable(hoge ${SRCS} ${HEAD})
