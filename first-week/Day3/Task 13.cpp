#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    currentHours = 14 * 60 * 60;
    currentMinutes = 34 * 60;
    currentSeconds = 42;

    std::cout << currentHours + currentMinutes +currentSeconds;
    


    return 0;
}