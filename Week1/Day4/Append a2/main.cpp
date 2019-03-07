#include <iostream>
#include <string>

std::string adda (std::string);

int main(int argc, char* args[]) {

    std::string animals [3] = {"koal" , "pand" , "zebr"};
    for (int i = 0; i < 3; ++i) {
        adda(animals[i]);
        std::cout<< adda(animals[i]) <<std::endl;
    }

    return 0;
}
std::string adda (std::string aw){
    aw += "a";
    return aw;
}