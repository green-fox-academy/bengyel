#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string> &girls, const std::vector<std::string> &boys) {
    std::vector<std::string> pair;
    for (int i = 0; i < boys.size(); ++i) {
        if (i < girls.size())
            pair.push_back(girls[i]);
            else(i < boys.size());
            pair.push_back(boys[i]);

    }
    return pair;
}

int main(int argc, char *args[]) {
    std::vector<std::string> girls = {"Eve", "Ashley", "Claire", "Kat", "Jane"};
    std::vector<std::string> boys = {"Joe", "Fred", "Tom", "Todd", "Neef", "Jeff"};


    std::vector<std::string> matches = makingMatches(girls, boys);

    for (int i = 0; i < matches.size(); ++i) {
        std::cout << matches[i] << " ";
    }

    return 0;
}