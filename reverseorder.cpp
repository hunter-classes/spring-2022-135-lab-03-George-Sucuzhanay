#include <iostream>
#include "reverseorder.h"
#include <cstdlib>
#include <fstream>
#include <string>
#include <climits>

void reverse_order(std::string date1, std::string date2)
{
    std::ifstream fin("Current_Reservoir_Levels.tsv");

    std::string dates[365];
	double elevation[365];
    bool isDate = false;
	int counter = 0;

    if (fin.fail()) 
    {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file

    }
    else
    {
        std::string del, date;        // new string variable
        std::getline(fin, del);

        double eastEl, eastSt, westSt, westEl;

        while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
        { 
            // this loop reads the file line-by-line
            // extracting 5 values on each iteration 
            fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                                //ignorring the remaining columns 
        
            if(date == date1)
            {
                isDate = true;
				
            }
            if(isDate)
            {
                elevation[counter] = westEl;
                dates[counter] = date;
                counter = counter + 1;
            }
            if(date == date2){
                isDate = false;
            }
        };

        fin.close();
        // looping in reserve order
        for(int i = counter -1; i > -1; i--)
        {
            std::cout << dates[i] << " " << elevation[i] << " ft" << std::endl;
        };
    };
    
}