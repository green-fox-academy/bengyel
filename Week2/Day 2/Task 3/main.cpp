
#include <iostream>

int main ()
{

    float temperature = 21.3;
    float* pointtemp;
    pointtemp = &temperature;
    *pointtemp += 5.;

    std::cout << temperature << std::endl;

    return 0;
}