
set(CMAKE_MACOSX_RPATH 1)
cmake_minimum_required (VERSION 2.8.0)

project (DataAnalyser)
include_directories (./src)
include_directories (./src/processing)
# add_executable(analyser src/data_analyser.cpp src/processing/analyser.cpp src/processing/analyticsIndicator.cpp)
add_library(lanalyser SHARED src/processing/analyser.cpp src/processing/analyticsIndicator.cpp)

enable_testing()

add_executable (test_basic tests/test_basic.cpp)
add_executable (test_extra_new_line tests/test_extra_new_line.cpp)
add_executable (test_missing_number tests/test_missing_number.cpp)
add_executable (test_string_as_value tests/test_string_as_value.cpp)
add_executable (test_no_file tests/test_no_file.cpp)
target_link_libraries(test_basic lanalyser)
target_link_libraries(test_extra_new_line lanalyser)
target_link_libraries(test_missing_number lanalyser)
target_link_libraries(test_string_as_value lanalyser)
target_link_libraries(test_no_file lanalyser)
add_test( test_basic test_basic )
add_test( test_extra_new_line test_extra_new_line )
add_test( test_missing_number test_missing_number )
add_test( test_string_as_value test_string_as_value )
add_test( test_no_file test_string_as_value )
set_tests_properties( test_basic PROPERTIES PASS_REGULAR_EXPRESSION "Passed" )
set_tests_properties( test_extra_new_line PROPERTIES PASS_REGULAR_EXPRESSION "Passed" )
set_tests_properties( test_missing_number PROPERTIES PASS_REGULAR_EXPRESSION "Passed" )
set_tests_properties( test_string_as_value PROPERTIES PASS_REGULAR_EXPRESSION "Passed" )
set_tests_properties( test_no_file PROPERTIES PASS_REGULAR_EXPRESSION "Passed" )