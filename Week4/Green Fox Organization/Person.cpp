#include "Person.h"
#include <iostream>
std::string getGenderString(Gender gender)
{
    if(gender == Gender::MALE) {
        return "male";
    } else {
        return "female";
    }
}
Person::Person(int age, std::string name, Gender gender)
{
    _age = age;
    _name = name;
    _gender = gender;
}
void Person::introduce()
{
    std::cout << "I am "
    << _name
    << " "
    << _age
    << "years old "
    << getGenderString(_gender)
    << std::endl;
}
void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}
