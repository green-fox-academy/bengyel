#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void array_separator(char char_array[]);


int main()
{
    printf("Type in a sentence:\n\n");
    char string[256] = "I will be the best programmer in the world";
    array_separator(string);
    return(0);
}

void array_separator(char char_array[] )
{
    for (char *p = strtok(char_array, " "); p != NULL;p = strtok(NULL, " ")){
        puts(p);
    }
}
