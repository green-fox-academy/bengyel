#include <iostream>

int main(int argc, char* args[]) {
    int a;
    int b;
    std::cout << "Tell me a number!" << std::endl;
    std::cin >> a;
    for (int i = 1; i < 11; ++i) {
        b = (a*i);
        std::cout<< i<<"  *  "<< a << "  =  " << b <<std::endl;
        
    }

    return 0;
}