#include <iostream>
#include <string>
#include <libgen.h>

void  doubling (int x ){
     x *= 2;
     std::cout << x << std::endl;
}

int main(int argc, char* args[]){

    int baseNum = 123;
            doubling( baseNum);

    return 0;
}