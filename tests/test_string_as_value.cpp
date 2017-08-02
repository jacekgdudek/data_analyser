


#include <iostream>
// #include ""
#include "processing/analyser.hpp"

int main(int argc, char const *argv[])
{
	const char* input  = "./tests/sample_files/string_as_value.txt";
	const char* output = "./tests/sample_files/temp_output.txt";

	int result = analyse(input, output);
	if( result != 0 ){
		std::cout << "Passed" << std::endl;
	}

	return 0;
}