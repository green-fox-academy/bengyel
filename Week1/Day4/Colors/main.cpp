#include <iostream>
#include <string>

int main(int argc, char* args[]) {
    std::string colors[3][5] = {
            {"lime", "fores", "olive", "pale green", "spring green"},
            {"orange", "red", "tomato"},
            {"orchid", "violet", "pink", "hot pink"}};

        for (int i = 0; i <  3; i++){
            for (int j = 0; j < 5 ; ++j) {
            }
        }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; j++){
            std::cout << colors [i] [j] << " ";
        }
         std::cout <<std::endl;

    }


     return 0;
    };


