#ifndef UNTITLED79_VIOLIN_H
#define UNTITLED79_VIOLIN_H
#include "StringedInstrument.h"

class Violin : public StringedInstrument
{
public:
    Violin();
    Violin(int nos);
    std::string sound();
};


#endif //UNTITLED79_VIOLIN_H
