#ifndef UNTITLED80_BIRD_H
#define UNTITLED80_BIRD_H

#include "Egglayer.h"
class Bird : public Egglayer
{
public:
    Bird(std::string name);
    std::string getName();
};


#endif //UNTITLED80_BIRD_H
