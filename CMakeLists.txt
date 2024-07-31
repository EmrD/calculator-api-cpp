cmake_minimum_required(VERSION 3.20)
project(CalculatorAPI)

set(CMAKE_CXX_STANDARD 11)

find_package(PkgConfig REQUIRED)
pkg_check_modules(PISTACHE REQUIRED pistache)

include_directories(${PISTACHE_INCLUDE_DIRS})
link_directories(${PISTACHE_LIBRARY_DIRS})

add_executable(calculator-api src/main.cpp)
target_link_libraries(calculator-api ${PISTACHE_LIBRARIES})
