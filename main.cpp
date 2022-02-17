#include <iostream>
#include "reservoir.h"

int main()

{
  
  std::cout << "East Storage for 01/09/2018:  " << get_east_storage("01/09/2018") << std::endl;
  std::cout << "Minimum storage in East basin: "<< get_min_east() << std::endl;
  std::cout << "Maximum storage in East basin: " << get_max_east() << std::endl;
  std::cout << "Compare func: " << compare_basins("02/18/2018") << std::endl;
  std::cout << "Compare func: " << compare_basins("09/13/2018") << std::endl;


  return 0;
}
