# Проверка версии CMake
cmake_minimum_required(VERSION 3.26)

file(GLOB sources "*.c" "*.cpp" "${INCLUDE_DIR}/*.h")

add_library(${PROJECT_NAME} SHARED ${sources})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})