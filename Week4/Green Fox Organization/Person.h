#ifndef UNTITLED78_PERSON_H
#define UNTITLED78_PERSON_H
#include <string>
#include <iostream>

enum Gender {
    MALE,
    FEMALE
};
std::string getGenderString(Gender gender);
class Person
{
public:
    //Person();
    Person(int age, std::string name, Gender gender);
    //~Person();
    void introduce();
    void getGoal();
protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //UNTITLED78_STUDENT_H
