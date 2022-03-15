/*  
    #42
    There are two strings of maximal size of 20 chars given.
    Compare them (strcomp) and if they're identical, 
    display their length (strlen).
    If they're not identical, separately display their length.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // This is the library with string support.

int main()
{

    // Size of these strings is 10 and not 11; last char is \0 for comparison.
    char string1[11], string2[11];

    printf("\nInsert first string (maximal size is 10)\n");
    scanf("%s", string1);
    printf("\nInsert first string (maximal size is 10)\n");
    scanf("%s", string2);

    if (strcmp(string1, string2) == 0)   // strcmp() displays 0 if strings are identical.
    {

        printf("These strings are identical.\n");

        // There's no need for definition of %i variable, strlen() gives always int values.
        printf("Their length is %i chars.\n", strlen(string1));

    }

    else
    {

        printf("These strings are not identical.\n");
        printf("Length of the first string is %i chars.\n", strlen(string1));
        printf("Length of the second string is %i chars.\n", strlen(string2));

    }
}