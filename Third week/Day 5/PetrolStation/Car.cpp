#include "Car.h"
#include <iostream>

Car::Car(int gasAmount, int capacity) {
    _gasAmountC = gasAmount;
    _capacity = capacity;
}

bool Car::isFull() {
    return (_gasAmountC == _capacity);
};
void Car::fill() {
    _gasAmountC++;
};