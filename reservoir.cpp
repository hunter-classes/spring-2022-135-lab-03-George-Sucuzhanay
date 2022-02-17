// add your code
#include <iostream>
#include <cstdlib>
#include "reservoir.h"
#include <fstream>

double get_east_storage(std::string date);

std::ifstream fin("Current_Reservoir_Levels.tsv");



if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}