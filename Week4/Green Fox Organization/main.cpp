#include <iostream>
#include "Person.h"

int main()
{
    Person benjy(27, "Benjy", Gender::MALE);
    benjy.introduce();
    benjy.getGoal();
    return 0;
}