#include <iostream>

int main(int argc, char* args[]){

    float x;
    std::cout << "Tell me a distance in Km!";
    std::cin >> x;
    x = x * 0.62;
    std::cout << "This is " << x << "miles";





    return 0;
}