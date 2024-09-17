cmake_minimum_required(VERSION 3.14)
project(sample_cpp_project)

add_executable(main main.cpp my_add.cpp)

enable_testing()

add_executable(tests test_add.cpp my_add.cpp)
target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)