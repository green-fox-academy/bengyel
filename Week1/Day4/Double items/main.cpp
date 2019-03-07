#include <iostream>
#include <string>

int main(int argc, char* args[]) {

  int named[5] = {3, 4, 5, 6, 7};
    for (int i = 0; i < sizeof(named) / sizeof(int); ++i) {
        named[i] = named[i] * 2;

        std::cout<< named[i] << std::endl;

    }

    return 0;
}