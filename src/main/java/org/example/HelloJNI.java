package org.example;

public class HelloJNI {
    public static void main(String[] args) {
//        System.load("D:\\Workspace\\Java\\jni-with-gradle-example\\build\\lib\\main\\release\\jni-with-gradle-example.dll");
        System.loadLibrary("jni-with-gradle-example");
        printHelloWorld();
    }

    public static native void printHelloWorld();
}
