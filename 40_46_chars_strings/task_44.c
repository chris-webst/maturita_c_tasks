/*  
    #44
    Write a program that converts a character
    to an ASCII variable and conversely.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char character;  // CAUTION! Use '' for chars and "" (+ space for \0) for strings.
    int integer;
    
    // Conversion from ASCII to integer value.
    printf("Insert any ASCII variable to be converted into decimal system.\n");
    scanf("%c", &character);  // It's enough to convert the ASCII variable it to an integer.
    integer = (int)character;  // Conversion into decimal system.
    printf("\nThe ASCII variable %c has an integer value %i.\n", character, integer);

    // Conversion from an integer value to ASCII.
    printf("\nInsert any integer.\n");
    scanf("%i", &integer);
    character = (char)integer;  // Conversion into ASCII.
    printf("\nInteger %i has an ASCII variable %c.", integer, character);
    
    return 0;

}
