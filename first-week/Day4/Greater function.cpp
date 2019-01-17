#include <iostream>
#include <string>
#include <libgen.h>

void greet (std::string);




int main(int argc, char* args[]){

   std::string a1 = "Greenfox";
    greet(a1);


            return 0;
}

void greet(std::string a2){
std::cout << "Greeting dear, " << a2 << std::endl;


}
