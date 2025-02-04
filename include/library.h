#pragma once

#include "dll.h"

extern "C" {
DLL_EXPORT void hello();

DLL_EXPORT void exception();

DLL_EXPORT void crash();
}
