#include <iostream>
#include <map>
#include <string>

int main() {
    for (int i = 0; i < 5; ++i) {


        std::map<std::string, std::string> Tree[5];
        Tree[i]["Type"];
        Tree[i]["Leaf color"];
        Tree[i]["Age"];
        Tree[i]["Sex"];

        std::cout << "Type of the tree : " << std::endl;
        std::cin >> Tree[i]["Type"];
        std::cout << "Color of the tree's leaf : " << std::endl;
        std::cin >> Tree[i]["Color"];
        std::cout << "Age of the tree : " << std::endl;
        std::cin >> Tree[i]["Age"];
        std::cout << "Sex of the tree: " << std::endl;
        std::cin >> Tree[i]["Sex"];


        std::cout << "The tree type is: " << Tree[i]["Type"] << std::endl;
        std::cout << "The tree's leaf's color is: " << Tree[i]["Color"] << std::endl;
        std::cout << "The tree age is: " << Tree[i]["Leaf color"] << std::endl;
        std::cout << "The tree sex is: " << Tree[i]["Sex"] << std::endl;
    }
    return 0;
}