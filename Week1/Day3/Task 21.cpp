#include <iostream>

int main(int argc, char* args[]){

    int x;
    int y;
    std::cout << "How many girls come to the party? ";
    std::cin >> x;
    std::cout << "How many boys come to the party? ";
    std::cin >> y;

    if( x == y && x + y >= 20){
        std::cout << "The Party is excellent!";
    }else if( x != y && x + y >= 20){
        std::cout <<"Quite cool party!";
    }else if( x + y < 20){
        std::cout <<"Average party...";
    }else if( x <= 0){
        std::cout <<"Sausage party";
    }






    return 0;
}