#include <iostream>

#include "duck.hpp"

Duck::Duck() {
  std::cout << "Life is like a hurricane! Here in... Duckberg!" << std::endl;
  std::cout << "Does anybody still get this reference or do I need to update this joke?" << std::endl;
}

std::string Duck::eat_peas() {
  return "You shouldn't feed ducks in the park bread, but they actually love peas. Look up ducks eating peas on YouTube.\n";
}
