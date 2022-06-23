/**
 * #44
 * Write a program that converts a character
 * to an ASCII variable and conversely.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    /**
     * CAUTION! Use '' for chars and ""
     * (+ space for \0) for strings.
     **/
    char character;
    int integer;
    
    /** Conversion from ASCII to integer value. **/
    printf("Insert any ASCII variable to be converted into decimal system.\n");
    scanf("%c", &character);
    /** Conversion into decimal system. **/
    integer = (int)character;
    printf("\nThe ASCII variable %c has an integer value %i.\n",
    character, integer);

    /** Conversion from an integer value to ASCII. **/
    printf("\nInsert any integer.\n");
    scanf("%i", &integer);
    /** Conversion into ASCII. **/
    character = (char)integer;
    printf("\nInteger %i has an ASCII variable %c.", integer, character);

    return 0;

}
