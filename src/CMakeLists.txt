# CMakeLists.txt

# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

# compiler must be 11 or 14
SET (CMAKE_CXX_STANDARD 14)

include_directories("./runtime/src")
include_directories("./gen")

add_executable(test_antlr main.cpp)