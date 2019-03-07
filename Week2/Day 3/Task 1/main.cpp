#include <iostream>
#include <fstream>

int divide(int a, int b){
    int c;
    c = b/a;
    return c;
}

int main() {
    int num;
    std::cout << "Tell me a number!" << std::endl;
    std::cin >> num;
    int xy;
    try{
        int ten = 10;
        if(num == 0){
            throw "Fail";
        }
        xy = divide(num ,ten);
        std::cout << xy << std::endl;
    }catch (char const* c){
        std::cout << c << std::endl;
    }
    return 0;
}