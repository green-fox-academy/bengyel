#include <iostream>

int main(int argc, char* args[]){

    int x;
    std::cout << "Tell me a number! ";
    std::cin >> x;

    if (x % 2 == 0) {
        std::cout << "Even";
    }else{
        std::cout <<"Odd";
    }







    return 0;
}