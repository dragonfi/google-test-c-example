# Add all your .cpp files here (separated by spaces)
add_executable(${PROJECT_TESTS_NAME} app_lib_tests.cpp)

# These lines include and link the GoogleTest libraries and your own library to the test executable
add_subdirectory(../${PATH_TO_GOOGLETEST} ${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(../${PATH_TO_GOOGLETEST}/googletest)
target_link_libraries(${PROJECT_TESTS_NAME} gtest gtest_main)
target_link_libraries(${PROJECT_TESTS_NAME} ${PROJECT_LIB_NAME})
