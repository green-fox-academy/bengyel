
#include <iostream>

int main ()
{


    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int* pointa;
    double* pointb;
    std::string* pointname;
    pointa =  &a;
    pointb = &b;
    pointname = &name;

    std::cout << "The pointers memory addresses are:" << &pointa << " " << &pointb << " " << &pointname <<std::endl;
    std::cout << "The pointers values are:" << *pointa << " " << *pointb << " " << *pointname <<std::endl;
    return 0;
}