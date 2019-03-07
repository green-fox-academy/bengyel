#ifndef UNTITLED66_STATION_H
#define UNTITLED66_STATION_H
#include "Car.h"
class Station {
    int _gasAmount;
public:
    Station(int gasAmount);
    void Filling(Car &carname);

};


#endif //UNTITLED66_STATION_H
