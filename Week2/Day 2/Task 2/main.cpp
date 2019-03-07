#include <iostream>

int main ()
{
    int age = 31;
    int* pointage;
    pointage = &age;

    std::cout << *pointage << std::endl;

    return 0;
}