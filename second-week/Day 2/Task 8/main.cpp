#include <iostream>

int main()
{
    int arraysize;
   std::cout << "Tell me a number!" << std::endl;
   std::cin >> arraysize;

   int myarray[arraysize];

    for (int i = 0; i < arraysize ; ++i) {
        std::cout << "Let's fill the array:";
        std::cin >> myarray[i];
    }
    int largest_neg_num = -2147483647;
    for (int j = 0; j < arraysize; ++j) {
        if(myarray[0] < myarray[j])
            largest_neg_num = myarray[j];
    }
    std::cout << "The largest number is: " << largest_neg_num << " " << &largest_neg_num << std::endl;

    return 0;
}