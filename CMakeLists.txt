cmake_minimum_required(VERSION 3.0.0)
project(CaesarCipher VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_subdirectory(CaesarCipher)

add_executable(main main.cpp)
target_link_libraries(main CaesarCipher)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
