#include "HelloWorldJNI.h"

#include <iostream>

extern "C" {

JNIEXPORT void JNICALL Java_HelloWorldJNI_hello
  (JNIEnv *, jobject) {
  std::cout << "Hello, World!" << std::endl;
}

}