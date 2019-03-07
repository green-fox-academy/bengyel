#ifndef UNTITLED80_MAMMAL_H
#define UNTITLED80_MAMMAL_H
#include "Animal.h"

class Mammal : public Animal
{
public:
    Mammal(std::string name);
    std::string getName();
    std::string breed();
};


#endif //UNTITLED80_MAMMAL_H
