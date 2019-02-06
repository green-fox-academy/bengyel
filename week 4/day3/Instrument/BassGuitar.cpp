#include "BassGuitar.h"
BassGuitar::BassGuitar()
{
    _name = "Bass Guitar";
    _numberOfStrings = 4;
}
BassGuitar::BassGuitar(int nos)
{
    _name = "Bass Guitar";
    _numberOfStrings = nos;
}
std::string BassGuitar::sound()
{
    return "Duum-duum-duum";
}
