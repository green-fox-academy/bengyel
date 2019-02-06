#ifndef UNTITLED79_STRINGEDINSTRUMENT_H
#define UNTITLED79_STRINGEDINSTRUMENT_H
#include <iostream>
#include "Instrument.h"
class StringedInstrument : public Instrument
{
public:
    void play();
    virtual std::string sound() = 0;
protected:
    int _numberOfStrings;
};

#endif //UNTITLED79_STRINGEDINSTRUMENT_H
