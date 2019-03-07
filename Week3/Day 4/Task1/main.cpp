#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.
void counter(int count);
int main() {
    int n;
    n = 7;

    counter(n);

    return 0;
}
void counter(int count)
{
    if (count >= 1)
    {
        std::cout << count << std::endl;
        counter(count - 1);
    }
};