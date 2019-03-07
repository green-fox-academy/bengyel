#include <iostream>

int main(int argc, char* args[]) {

int a = 3;
    std::cout << a + 9 << std::endl;

int b = 100;
    std::cout << b - 95 << std::endl;

int c = 44;
    std::cout << c * 2 << std::endl;

int d = 125;
    std::cout << d / 5 << std::endl;

int e = 8;
    std::cout << e * e << std::endl;

int f1 = 123;
int f2 = 345;
bool b1 = (f1 > f2);
std::cout << b1 << std::endl;

int g1 = 350;
int g2 = 200;
bool b2 = (g2 * 2 > g1);
std::cout << b2 << std::endl;

int h = 135798745;
bool b3 = (h % 11 == 0 );
    std::cout << b3 << std::endl;

int i1 = 10;
int i2 = 3;
bool b4 = (i1 > i2 * i2 && i1 < i2 * i2 * i2);
    std::cout << b4 << std::endl;

int j = 1521;
bool b5 = ( j % 5 == 0 || j % 3 == 0);
    std::cout << b5 << std::endl;










    return 0;
}