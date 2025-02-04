#include "library.h"

#include <iostream>

extern "C" {
void hello() {
    std::cout << "Hello, World!" << std::endl;
}

void exception() {
    std::cout << "throw exception" << std::endl;
    throw std::exception();
}

void crash() {
    std::cout << "crash" << std::endl;
    int *ptr = nullptr;
    *ptr = 42; // Попытка записи по нулевому адресу вызовет краш
}
}
