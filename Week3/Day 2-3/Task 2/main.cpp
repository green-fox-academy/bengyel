#include <iostream>
#include <string>

class BlogSpot{
public:
    void blog(std::string authorname,std::string title,
            std::string text,std::string publicationDate) {
        std::cout << authorname << title << publicationDate << text << std::endl;
    }
    };

int main() {

    std::string aname;
    std::string title;
    std::string text;
    std::string pdate;
    aname = "Dan Brown";
    title = "Inferno";
    text = "In middle Italy...";
    pdate = "2015.05.13.";

    BlogSpot blogspot;
    blogspot.blog(aname, title, text, pdate);

    return 0;
}