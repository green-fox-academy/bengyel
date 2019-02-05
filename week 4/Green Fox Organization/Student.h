#ifndef UNTITLED78_STUDENT_H
#define UNTITLED78_STUDENT_H
#include "Person.h"
#include <iostream>

class Student
{
public:
    Student(Gender _gender);
    Student(int age, std::string name, Gender _gender, std::string previousOrgenization, int skippedDays);

    void getGoal();
    void introduce();
    void skipDays(int numberOfDays);

private:
    int _age;
    std::string _name;
    Gender _gender;
    std::string _previousOrgenization;
    int _skippedDays;
};


#endif //UNTITLED78_STUDENT_H
