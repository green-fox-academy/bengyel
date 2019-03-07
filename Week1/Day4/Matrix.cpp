
#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int s[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j){
            if (i==j)
                s[i][j]=1;
            else
                s [i][j]=0;
        }
    }
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j) {
            std::cout << s[i][j] << " ";
        }
        std::cout<<std::endl;
    }

    return 0;
}