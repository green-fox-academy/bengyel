#include<stdio.h>

int main()
{
    char myName[30] = "Benjy";
    int myAge = 27;
    float myHeight = 1.86;

    printf("Hello! \nMy name is %s.\nI am %d years old.\nMy height is %.2f meter.", myName, myAge,myHeight);

    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Use variables to store the informations!
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87

    return 0;
}