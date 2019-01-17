
#include <iostream>
#include <string>
int factorio(int);
int main(int argc, char* args[]) {

    std::cout << factorio( 3 ) << std::endl;


    return 0;
}
int factorio(int x){
    int f = 1;
    for(int i = 1; i <= x; i++ ){
        f *= i;
    }
    return f;
}