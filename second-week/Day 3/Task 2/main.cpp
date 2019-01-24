#include <iostream>
#include <fstream>
#include <string>

int main () {
    std::fstream textprinter;
    textprinter.open("my-file.txt");
    std::string text;
    while (getline(textprinter, text)) {
        std::cout << text << std::endl;
    }
    textprinter.close();



    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory

    return 0;
}