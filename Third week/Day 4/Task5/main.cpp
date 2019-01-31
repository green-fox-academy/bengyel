#include <iostream>
// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
int buniesears (int n, int b)
{
if (n > 0) {
    return b + (buniesears(n-1, b));
} else {
    return n;
}
};
int main() {
    int bunnies;
    int ears = 2;
    std::cout << "The bunnies number is:" << std::endl;
    std::cin >> bunnies;
    std::cout << buniesears(bunnies, ears) << std::endl;
    return 0;
}