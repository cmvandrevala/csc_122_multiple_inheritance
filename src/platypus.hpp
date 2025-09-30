#pragma once

#include <string>

#include "beaver.hpp"
#include "duck.hpp"

class Platypus : public Beaver, public Duck
{
public:
  Platypus();
  std::string contemplate_existence();
  std::string description();
};
