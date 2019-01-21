
#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string example = ("In a dishwasher far far away");
    std::string dish = "dishwasher";

    int start_pos = example.find(dish);
    if(start_pos == std::string::npos)
        std::cout << "Cannot replace" << std::endl;
    else
        example.replace(start_pos, dish.length(), "galaxy");


    std::cout << example << std::endl;
    return 0;
}