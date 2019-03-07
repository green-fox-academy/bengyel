#include <iostream>

int main()
{
    int number[5] = {};
    for (int i = 0; i < 5 ; ++i) {
        std::cout << "Tell me a number:"<< std::endl;
        std::cin >> number[i];
    }

    int* p_numbers;
    p_numbers = &number[0];
    for (int j = 0; j < 5 ; ++j) {
        std::cout << p_numbers[j] << std::endl;
    }


    return 0;
}