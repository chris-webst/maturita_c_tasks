/**
 * #41
 * Write a program that loads three strings
 * and displays them togehter as one string
 * with spaces on the monitor.
 * 
 * Use the strcat() fuction.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    /**
     * CAUTION! string_1 = "" without [] is prohibited.
     * Another variable declaration option is
     * string_1[] = {'H', 'e', 'l', 'l', 'o'}.
     **/
    char string_1[15];
    char string_2[15];
    char string_3[15];
    
    printf("You're about to insert three strings you want to "
    "connect together. Please keep in mind that you can't use "
    "spaces nor enters within one string. If you need to insert "
    "a string which consists of more than one word, use underscores.\n\n");
    
    printf("Insert 1. string:\n");
    /* CAUTION! scanf() doesn't use & for scanning strings. */
    scanf("%s", string_1);
    
    printf("\nInsert 2. string:\n");
    scanf("%s", string_2);
    
    printf("\nInsert 3. string:\n");
    scanf("%s", string_3);

    strcat(string_1, " ");  /* CAUTION! strcat() connects just two strings. */
    strcat(string_1, string_2);
    strcat(string_1, " ");
    strcat(string_1, string_3);

    printf("\nThe final string:");
    /* strcat() saves the connected string into the first variable. */
    printf("\n%s", string_1);

    return 0;

}
