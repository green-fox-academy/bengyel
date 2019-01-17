#include <iostream>
#include <string>
#include <libgen.h>

std::string appendAFunc(std::string);

int main(int argc, char* args[]){

   std::string typo  = "Chinchill";
    appendAFunc(typo);
    std::cout << appendAFunc(typo) << std::endl;



    return 0;
}

std::string appendAFunc(std::string a3){
     a3+="a";
    return a3;
}


