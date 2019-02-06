#ifndef UNTITLED79_INSTRUMENT_H
#define UNTITLED79_INSTRUMENT_H
#include <iostream>
#include <string>
class Instrument
{
public:
    virtual void play() =0;
protected:
    std::string _name;
};


#endif //UNTITLED79_INSTRUMENT_H
