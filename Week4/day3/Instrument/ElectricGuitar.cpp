#include "ElectricGuitar.h"
ElectricGuitar::ElectricGuitar()
{
_name = "Electric Guitar";
_numberOfStrings = 6;
}
ElectricGuitar::ElectricGuitar(int nos)
{
    _name = "Electric Guitar";
    _numberOfStrings = nos;
}
std::string ElectricGuitar::sound(){
    return "twang";
}