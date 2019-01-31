#include <iostream>
int counter(int num);
// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
int main() {
  int num;
  std::cout << "Tell me a number" << std::endl;
  std::cin >> num;
  counter(num);
    std::cout << counter(num) << std::endl;
    return 0;
}
int counter(int num)
{

    if (num < 10) {
        return num;
    } else {
        return counter(num / 10) + counter(num % 10);
    }

};
