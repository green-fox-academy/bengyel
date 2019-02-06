#ifndef UNTITLED79_ELECTRICGUITAR_H
#define UNTITLED79_ELECTRICGUITAR_H
#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument
{
public:
    ElectricGuitar();
    ElectricGuitar(int nos);
    std::string sound();
};


#endif //UNTITLED79_ELECTRICGUITAR_H
