#include "Station.h"
#include <iostream>
Station::Station(int gasAmount) {
    _gasAmount = gasAmount;
}
void Station::Filling(Car &carname)
{
    while (!carname.isFull()){
        carname.fill();
        _gasAmount--;
        std::cout << "Filling car!" << std::endl;
    }
    std::cout << _gasAmount << std::endl;
};
