#include "HelloWorldJNI.h"

#include <iostream>

extern "C" {
JNIEXPORT void JNICALL Java_HelloWorldJNI_hello
(JNIEnv *, jobject) {
    std::cout << "Hello, World!" << std::endl;
}

JNIEXPORT void JNICALL Java_HelloWorldJNI_riskyNativeMethod
(JNIEnv *, jobject) {
    printf("Выполнение опасного метода...\n");

    // Код, который может вызвать краш
    int *ptr = nullptr;
    *ptr = 42; // Это вызовет краш!
}
}
