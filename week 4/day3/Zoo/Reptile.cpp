#include "Reptile.h"
Reptile::Reptile(std::string name)
{
    _name = name;
}
std::string Reptile::getName()
{
    return _name;
}