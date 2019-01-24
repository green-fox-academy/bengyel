#include <iostream>
#include <fstream>
#include <string>

int filename( std::string linestring){
    int lines = 0;
    std::fstream filename;
    filename.open(linestring);

    while (getline(filename,linestring)){
        lines++;
    }
    return lines;
}
int main () {
    int function;
    std::string text ("text.txt");
    function = filename(text);
    std::cout << function << std::endl;



    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    return 0;
}