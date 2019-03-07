#include "Student.h"
#include "Person.h"
#include <iostream>

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}
void Student::introduce()
{
    std::cout << "Hi, I'm "
    << _name << " "
    << _age << "years old. "
    << getGenderString(_gender)
    << " from " << _previousOrgenization
    << " and I skipped " << _skippedDays
    <<std::endl;
}
void Student::skipDays(int numberOfDays)
{
    _skippedDays += numberOfDays;
}
Student::Student(Gender _gender) : _gender(_gender)
{
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _previousOrgenization = "The School of Life";
}