// add your code
#include <iostream>
#include <cstdlib>
#include "reservoir.h"
#include <fstream>
#include <climits>

double get_east_storage(std::string date)
{
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    double eastSt = -1.0;
    if (fin.fail()) 
    {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file

    }
    else
    {
        std::string junk, date;        // new string variable
        std::getline(fin, junk);
        double eastEl, westSt, westEl;

        while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
        { 
            // this loop reads the file line-by-line
            // extracting 5 values on each iteration 
            fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                                //ignorring the remaining columns 
        
            // for example, to print the date and East basin storage:
            if(date == date){
                fin.close();
				return eastSt;
            }
            // std::cout << date << " " << eastSt << std::endl;
        };
        fin.close();
    };
    return eastSt;
};

