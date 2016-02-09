
# visual studio(MS compiler)
if (MSVC)
  file(GLOB SRCS *.c *.cpp)
  file(GLOB HEAD *.h *.hpp)
# xcode(apple system)
elseif(APPLE)
  file(GLOB SRCS
    *.c *.cpp
    print/*.c print/*.cpp
  )
  file(GLOB HEAD
    *.h *.hpp
    print/*.h print/*.hpp
  )
endif()

add_executable(Hoge ${SRCS} ${HEAD})
