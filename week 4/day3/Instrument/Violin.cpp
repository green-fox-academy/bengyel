#include "Violin.h"
Violin::Violin()
{
    _name = "Violin";
    _numberOfStrings = 4;
}
Violin::Violin(int nos)
{
    _name = "Violin";
    _numberOfStrings = nos;
}
std::string Violin::sound()
{
    return " Screech";
}