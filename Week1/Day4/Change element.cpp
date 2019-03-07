#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int s[6] = {1 , 2 , 3 , 8 , 5 , 6};
    s[3] /= 2;
    std::cout<< s[3] << std::endl;
    return 0;
}