#ifndef UNTITLED80_ANIMAL_H
#define UNTITLED80_ANIMAL_H
#include <iostream>
enum Gender{
    MALE,
    FEMALE
};
enum Size{
    SMALL,
    MEDIUM,
    LARGE
};
class Animal
{
public:
virtual std::string getName() = 0;
virtual std::string breed() = 0;
protected:
    int _age;
    std::string _name;
    Gender _gender;
    std::string _habitat;
    Size _size;
};


#endif //UNTITLED80_ANIMAL_H
