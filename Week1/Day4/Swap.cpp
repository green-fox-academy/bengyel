
#include <iostream>
#include <string>
void swap(int a , int b);
int main(int argc, char* args[]) {

    int a = 15;
    int b = 23;

    std::cout << a << std::endl << b << std::endl;
    swap(a, b);

    return 0;
}
void swap(int a, int b){
    int c = a;
    a = b;
    b = c;

    std::cout << a << std::endl << b << std::endl;



}