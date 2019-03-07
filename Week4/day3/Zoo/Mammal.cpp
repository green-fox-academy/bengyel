#include "Mammal.h"
Mammal::Mammal(std::string name)
{
    _name = name;
}
std::string Mammal::getName()
{
    return _name;
}
std::string Mammal::breed()
{
    return "breeding by pushing miniature versions out.";
}
