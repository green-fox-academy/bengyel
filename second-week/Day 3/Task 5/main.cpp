#include <iostream>
#include <fstream>
#include <string>

void jozsi (std::string path , std::string word, int number ){
    std::ofstream geza (path);
    for (int i = 0; i < number; ++i) {
        geza << word <<std::endl;
    }
}
// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"
int main() {
    std::string bela ("text.txt");
    int usednum = 7;
    std::string usedword = "peach";

    jozsi(bela , usedword , usednum);

    return 0;
}