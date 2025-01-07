# Проверка версии CMake
cmake_minimum_required(VERSION 3.26)
# Если версия установленой программы ниже, то ошибка выполнения

# Название проекта и проверка доступности компиляторя с++
project(lib CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Включение экспорта всех символов для создания динамической библиотеки
if (WIN32 OR WIN64)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif ()
set(CMAKE_AIX_EXPORT_ALL_SYMBOLS ON)

#статическая библиотека
if (MINGW)
    add_link_options(-static)
endif ()

# include java directory
find_package(JNI REQUIRED)
message("java ${Java_JAVA_EXECUTABLE}")
include_directories(${JNI_INCLUDE_DIRS})

add_subdirectory(src)
