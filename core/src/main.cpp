#include <iostream>   // cout, endl
#include <unistd.h>   // EXIT_FAILURE, EXIT_SUCCESS
#include <vector>     // ...

#include "fancyalgorithms/fancy_functions.hpp"

int main(int argc, char *argv[])
{
  std::cout << "fancy_increment(1): " << fancy_increment(1) << std::endl;
  
  FancyObject fancy(-10,10);
  std::cout << "fancy.random_increment(1): " << fancy.random_increment(1) << std::endl;

  std::vector<int> numbers {1,2,3,4,5};
  std::cout << "fancy_increment_container({1,2,3,4,5}): {";
  fancy_increment_container(numbers);
  for(auto i:numbers)
    std::cout << " " << i;
  std::cout << " }" << std::endl;
  
  return EXIT_SUCCESS;
}
