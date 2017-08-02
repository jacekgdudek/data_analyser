# data_analyser

## Description
Shared object library processing a file of doubles seperated by '\n' into a file with analyzed metrics.
Each line opf the output represents comma-seperated:
  - count of all the numbers to line
  - sum of all the numbers to line
  - average of all the numbers to line
  
## How to build
### OSX
- Install homebrew
  `https://brew.sh/`
- Install CMake
  `brew install cmake`
- Run CMake
  `cmake .`
- Run Make
  `make`
- Run Tests
  `make test`
