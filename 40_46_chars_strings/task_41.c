/*  
    #41
    Write a program that loads three strings
    and displays them togehter as one string
    with spaces on the monitor (strcat).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string_1[15];  // CAUTION! string_1 = "" without [] is prohibited
    char string_2[15];
    char string_3[15];
    
    int i;
    
    printf("Insert 1. string:\n");
    scanf("%s", string_1);  // CAUTION! scanf() doesn't use & for scanning strings
    
    printf("\nInsert 2. string:\n");
    scanf("%s", string_2);
    
    printf("\nInsert 3. string:\n");
    scanf("%s", string_3);

    strcat(string_1, " ");  // strcat() connects just two strings
    strcat(string_1, string_2);
    strcat(string_1, " ");
    strcat(string_1, string_3);

    // strcat() saves the connected string into the first variable
    printf("\n%s", string_1);

    return 0;

}