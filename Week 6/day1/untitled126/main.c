#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void i_in_string(char example_array[]);

int main ()
{
	char string[55] = "This is a string for testing";
	char *p;

	i_in_string(string);

	return 0;
}

void i_in_string(char example_array[])
{
    int count = -1;
    for(char *i = example_array; *i != '\0'; i++) {
        count++;
        if (*i == 'i'){
            printf("%d\n", count);
        }
    }
}
