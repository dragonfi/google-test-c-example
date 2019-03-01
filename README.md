# google-test-c-example
An example on how to use google test with a C project.

The progress is roughly the same as for C++ projects.

## Main differences

1. main.c and files in app_lib have a .c extension. CMake will compile them as C code.
2. As gtest is C++, the test file will have a .cpp extension.
3. To import the C headers into your test file, you need to enclose the import in ```extern "C"```.
