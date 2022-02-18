#include <iostream>
#include "reservoir.h"
#include "reverseorder.h"

int main()

{
  
  std::cout << "East Storage for 01/09/2018: " << get_east_storage("01/09/2018") << std::endl;
  std::cout << "Minimum storage in East basin: "<< get_min_east() << std::endl;
  std::cout << "Maximum storage in East basin: " << get_max_east() << std::endl;
  std::cout << "Compare func: " << compare_basins("02/18/2018") << std::endl;
  std::cout << "Compare func: " << compare_basins("01/08/2018") << std::endl;
  std::cout << " \n";
  std::cout << "Reverse order of 01/09 and 01/20:\n";
  reverse_order("01/09/2018", "01/20/2018");


  return 0;
}
