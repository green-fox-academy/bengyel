#include <iostream>
#include "Car.h"
#include "Station.h"
#include <string>

int main(int argc, char* args[]) {

    Car audi(10, 15);
    Station station(3000);
    //audi.fill();
    station.Filling(audi);

    return 0;
}