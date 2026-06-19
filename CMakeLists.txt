cmake_minimum_required(VERSION 3.30)
project(liballen VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(GTest REQUIRED)

add_library(liballen INTERFACE)
target_include_directories(liballen INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

add_executable(liballen_main src/main.cpp)
target_link_libraries(liballen_main PRIVATE liballen)

enable_testing()

add_executable(liballen_tests tests/test_main.cpp)
target_link_libraries(liballen_tests PRIVATE liballen GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(liballen_tests)
