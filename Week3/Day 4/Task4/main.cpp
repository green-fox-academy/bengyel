#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
int square (int num, int base)
{
if (num > 1)
    return base*square(base, num-1);
};
int main() {
    int b;
    int n;
    std::cout << "Tell me a number! ";
    std::cin >> n;
    std::cout << "Tell me a number! ";
    std::cin >> b;
    square(n);
    std::cout << square(b, n) << std::endl;
    return 0;
}