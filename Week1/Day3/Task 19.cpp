#include <iostream>

int main(int argc, char* args[]){

    int x;
    std::cout << "Tell me a number! ";
    std::cin >> x;

    if (x <= 0){
        std::cout << "Not enough";
    }else if(x == 1) {
        std::cout << "One";
    }else if(x ==2){
        std::cout << "Two";
    } else if (x >= 3){
        std::cout << "A lot";
    }





    return 0;
}