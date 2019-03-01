# google-test-c-example
An example on how to use google test with a C project.

The progress is roughly the same as for C++ projects.

Basically you create a separate library (app_lib) to use both in your main application and in the tests.
The tests and main are built separately, so there will be no test related code in your main executable.

## Differences from testing C++ code

1. `main.c` and implementation files in `app_lib` have a `.c` extension. CMake will compile them as C code.
2. As gtest is C++, the test files will have `.cpp` extensions.
3. To import the C headers into your test file, you need to enclose the import in `extern "C"`.
