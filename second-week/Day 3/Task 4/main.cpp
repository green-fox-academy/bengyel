#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::fstream brownbear;
    brownbear.open("text.txt");
    std::string line;
    brownbear << "Bengyel Gábor" << std::endl;

    return 0;
}