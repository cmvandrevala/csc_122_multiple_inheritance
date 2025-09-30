#include <iostream>

#include "src/beaver.hpp"
#include "src/duck.hpp"
#include "src/platypus.hpp"

int main()
{
  std::cout << ">> Initializing the Beaver" << std::endl;
  Beaver beaver;
  std::cout << std::endl;

  std::cout << ">> Initializing the Duck" << std::endl;
  Duck duck;
  std::cout << std::endl;

  std::cout << ">> Chewing Wood and Eating Peas" << std::endl;
  std::cout << beaver.chew_wood() << std::endl;
  std::cout << duck.eat_peas() << std::endl;
  std::cout << std::endl;

  std::cout << ">> Initializing the Platypus" << std::endl;
  Platypus platypus;
  std::cout << std::endl;

  std::cout << ">> Platypus Doesn't Need Friends" << std::endl;
  std::cout << platypus.chew_wood() << std::endl;
  std::cout << platypus.eat_peas() << std::endl;
  std::cout << platypus.contemplate_existence() << std::endl;
  std::cout << std::endl;

  std::cout << ">> Describing the Animals" << std::endl;
  std::cout << platypus.Beaver::description() << std::endl;
  std::cout << platypus.Duck::description() << std::endl;
  std::cout << platypus.description() << std::endl;
  std::cout << std::endl;
}
