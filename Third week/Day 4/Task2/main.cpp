#include <iostream>

int adder(int add)
{
    if(add <= 1) {
        return 1;
    } else {
        return add * adder(add - 1);
    }
}

int main() {
    int n = 7;
    std::cout << adder(n) << std::endl;
    return 0;
}