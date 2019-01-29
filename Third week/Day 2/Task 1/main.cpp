
#include <iostream>
#include <string>

class PostIt{
    public:
    void  exmples(std::string backgroundcolor, std::string textonit, std::string textcolor){

        std::cout << backgroundcolor << ", " << textonit << ", " <<
        textcolor << std::endl;
    }
};

int main(int argc, char* args[])
{
    std::string pink;
    std::string Hello;
    std::string black;
    pink = "pink";
    Hello = "Hello";
    black = "black";
    PostIt postit;
    postit.exmples(pink, Hello, black);

    std::string blue;
    std::string ByeBye;
    std::string green;
    blue = "blue";
    ByeBye = "Bye Bye";
    green = "green";
    PostIt postit2;
    postit2.exmples(blue,ByeBye, green);



    return 0;
}

//ackgroundColor
   //     a text on it
     //   a text
     // Create a few example post-it objects:
//an orange with blue text: "Idea 1"
//a pink with black text: "Awesome"
//a yellow with green text: "Superb!"