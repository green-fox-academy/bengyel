#include<stdio.h>

int main()
{
    int add = 13+22;
    int sub = 22-13;
    int mult = 22*13;
    double div = 22.0/13.0;
    int reminder = 22%13;
    // Create a program that prints a few operations on two numbers: 22 and 13
printf("%d\n", add);
    // Print the result of 13 added to 22
printf("%d\n", sub);
    // Print the result of 13 substracted from 22
printf("%d\n", mult);
    // Print the result of 22 multiplied by 13
printf("%lf\n", div);
    // Print the result of 22 divided by 13 (as a decimal fraction)
printf("%d\n", reminder);
    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result

    return 0;
}