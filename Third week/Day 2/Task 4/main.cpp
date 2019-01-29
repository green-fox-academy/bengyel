#include <iostream>
#include <string>
class Sharpie{
std::string color;
float width;
float inkAmount;
public:
    Sharpie(std::string _color, float _width)
    {
        _color = color;
        _width = width;
        inkAmount = 100;
    }
    void use(){
        inkAmount -=8;
    }
};
int main() {

    return 0;
}