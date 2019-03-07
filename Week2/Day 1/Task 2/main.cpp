#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string bots = "nevertellmethebots";
    std::string http = "https";

    int botreplace = url.find(bots);
    int httpreplace = url.find(http);

    if(botreplace == std::string::npos)
        std::cout << "Unreplaceable" << std::endl;
    else
        url.replace(botreplace, bots.length(), "nevertellmetheodds");
    if(httpreplace == std::string::npos)
        std::cout << "Unreplaceable" << std::endl;
    else
        url.replace(httpreplace, http.length(), "https:");

    std::cout << url << std::endl;

    return 0;
}