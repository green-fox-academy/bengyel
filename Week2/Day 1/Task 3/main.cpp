#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");
    std::string change_it = "It";

    int position = quote.find(change_it);
    if(position == std::string::npos)
    std::cout << "Unchangeable" << std::endl;
    else
        quote.replace(position, change_it.length(), "It always takes longer than");


    std::cout << quote << std::endl;
    return 0;
}