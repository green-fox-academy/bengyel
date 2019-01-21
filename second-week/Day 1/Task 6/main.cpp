#include <iostream>
#include <string>
#include <vector>
#include <list>

std::vector<std::string> putSaturn(const std::vector<std::string>& planets)
{
    std::vector<std::string> saturn(planets);
    std::vector<std::string>::iterator it = saturn.begin();
    saturn.insert (it+5, 1, "Saturn");

    return saturn;
}

int main(int argc, char* args[])
{
    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};

    std::vector<std::string> correctPlanets = putSaturn(planets);

    for(int i = 0; i < correctPlanets.size(); ++i) {
        std::cout << correctPlanets[i] << " ";
    }
    return 0;
}
