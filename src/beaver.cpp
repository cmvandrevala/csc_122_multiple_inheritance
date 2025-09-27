#include <iostream>

#include "beaver.hpp"

Beaver::Beaver() {
  std::cout << "I am a beaver!" << std::endl;
  std::cout << "I became an official symbol of Canada on March 24, 1975 when the National Symbol of Canada Act received royal assent." << std::endl;
  std::cout << "Belive it or not, I am a symbol of Canadian sovereignty." << std::endl;
  std::cout << "https://www.canada.ca/en/canadian-heritage/services/official-symbols-canada.html" << std::endl;
}

std::string Beaver::chew_wood() {
  return "What did the beaver say to the tree? Nice gnaw-ing you!\n";
}
