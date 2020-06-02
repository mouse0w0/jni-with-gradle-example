#include "org_example_HelloJNI.h"
#include <stdio.h>

/*
 * Class:     org_example_HelloJNI
 * Method:    printHelloWorld
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_example_HelloJNI_printHelloWorld
  (JNIEnv *, jclass) {
    printf("Hello World\n");
}
