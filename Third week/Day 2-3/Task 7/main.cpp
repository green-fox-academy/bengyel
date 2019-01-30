#include <iostream>
#include "thing.h"
#include "fleet.h"

int main(int argc, char* args[])
{

    Fleet fleet;
    Thing t1("Get milk");
    Thing t2("Remove the obstacles");
    Thing t3("Stand up");
    Thing t4("Eat lunch");
    fleet.add(t1);
    fleet.add(t2);
    t3.complete();
    fleet.add(t3);
    t4.complete();
    fleet.add(t4);
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch

    std::cout << fleet.toString() << std::endl;
    return 0;
}