
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} point_t;
float distance_calculator(point_t p1, point_t p2);

point_t creat_a_point(float x, float y);

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/

int main()
{
    point_t first_point;
    point_t second_point;
    first_point = creat_a_point(4.3, 5.2);
    second_point = creat_a_point(3.7, 4.1);

    printf("The distance is: %f", distance_calculator(first_point, second_point));

    return 0;
}
float distance_calculator(point_t p1, point_t p2)
{
    float distance;

    float calculate = ((p2.x - p1.x) * (p2.x - p1.x)) +((p2.y - p1.y) * (p2.y - p1.y));
    distance = sqrt(calculate);

    return distance;
}

point_t creat_a_point(float x, float y)
{
    point_t result;
    result.x= x;
    result.y= y;

    return result;
}
