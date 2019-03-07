#include <iostream>

int main()
{

    int numbers[5] = {};
    for (int i = 0; i < 5; ++i) {
        std::cout << "Tell me a number" << std::endl;
        std::cin >> numbers[i];
    }
    for (int j = 0; j < 5 ; ++j) {
        std::cout << &numbers [j] << std::endl;

    }






    return 0;
}