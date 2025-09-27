#include <iostream>

#include "src/beaver.hpp"
#include "src/duck.hpp"
#include "src/platypus.hpp"

int main()
{
  Beaver beaver;
  std::cout << std::endl;

  Duck duck;
  std::cout << std::endl;

  std::cout << beaver.chew_wood() << std::endl;
  std::cout << duck.eat_peas() << std::endl;

  Platypus platypus;
  std::cout << platypus.chew_wood() << std::endl;
  std::cout << platypus.eat_peas() << std::endl;
  std::cout << platypus.contemplate_existence() << std::endl;
}
