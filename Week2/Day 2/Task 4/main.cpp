
#include <iostream>

int main()
{

    int a = 20;
    int b = 17;
    int* printa;
    int* printb;
    printa = &a;
    printb = &b;
    int result = *printa + *printb;
    std::cout << result << std::endl;


    return 0;
}