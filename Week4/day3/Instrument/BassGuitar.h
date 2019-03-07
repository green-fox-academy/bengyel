#ifndef UNTITLED79_BASSGUITAR_H
#define UNTITLED79_BASSGUITAR_H
#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument
{
public:
    BassGuitar();
    BassGuitar(int nos);
    std::string sound();
};


#endif //UNTITLED79_BASSGUITAR_H
