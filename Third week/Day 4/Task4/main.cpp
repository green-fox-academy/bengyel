#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
int square (int num)
{
if (num > 1)
    num = num * num;
    return num;
};
int main() {
    int n;
    std::cout << "Tell me a number! ";
    std::cin >> n;
    square(n);
    std::cout << square(n) << std::endl;
    return 0;
}