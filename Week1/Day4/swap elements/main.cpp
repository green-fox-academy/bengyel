#include <iostream>
#include <string>
void swapfirst(std::string cba[]);
int main(int argc, char* args[]) {

    std::string abc[3]={"first" , "second" , "third"};
    swapfirst(abc);
    std::cout<< abc[0]<<std::endl;
    std::cout<< abc[1]<<std::endl;
    std::cout<< abc[2]<<std::endl;

    return 0;
}
void swapfirst(std::string cba[]){
    std::string a = cba[0];
    cba[0] = cba[2];
    cba [2] = a;





}