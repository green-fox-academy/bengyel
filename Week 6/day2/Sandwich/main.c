
#include <stdio.h>
typedef struct Sandwich{
    char name[25];
    float price;
    float weight;
} sandwich_t;

float sandwich_order(int how_many, sandwich_t);

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

int main()
{
    sandwich_t mc_donalds;
    mc_donalds.price = 5.5;
    printf("The sandwich price is: %.2f", sandwich_order(3, mc_donalds));

    return 0;
}

float sandwich_order(int how_many, sandwich_t subway)
{
    float price;
    price = how_many * subway.price;
    return price;
}