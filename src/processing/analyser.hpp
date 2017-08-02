
#include <iostream>
#include <fstream>
#include <string>
#include "analyticsIndicator.hpp"

/*
    analyse 
        Takes input file of numbers seperated by new line symbol.
        Creates the file of analysed input data being:(comma-seperated)
        count,sum,average
    params:
        input  - const char* - file path of the input file
        output - const char* - file path of the output file
    returns:
        0  - if successful
        -1 - if failed

 */
extern int analyse(const char * input, const char * output);