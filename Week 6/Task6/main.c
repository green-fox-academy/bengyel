#include <stdio.h>

int main()
{

    int num = 8;
    int scanNum;
    while (num != scanNum) {
        printf("Tell me a number:");
        scanf("%d", &scanNum);
        if (scanNum < num) {
            printf("The stored number is higher.\n");
        } else if (scanNum > num) {
            printf("The stored number is lower.\n");
        } else {
            printf("You find the number: %d\n", num);
        }
    }
// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8
    return 0;
}