#include <iostream>
#include <string>

class Animal{
    int hunger;
    int thirst;
public:
    Animal()
    {
        hunger = 50;
        thirst = 50;
    }
    void play()
    {
        hunger++;
        thirst++;
    }
    void eat()
    {
        hunger++;
    }
    void drink()
    {
        thirst++;
    }
};
int main() {



    return 0;
}