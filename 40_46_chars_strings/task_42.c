/**
 * #42
 * There are two strings of maximal size
 * of 10 chars given by the user.
 * Compare them using the strcmp() function
 * and if they're identical, display their length –
 * for that, use the strlen() function.
 * If they're not identical, display their length
 * separately.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


int main()
{
    /* Size of these strings is 10 and not 11; last char is \0 for comparison. */
    char string1[11];
    char string2[11];

    printf("\nInsert first string (maximal size is 10; no enters or spaces).\n");
    scanf("%s", string1);

    printf("\nInsert second string (maximal size is 10; no enters or spaces).\n");
    scanf("%s", string2);

    /* strcmp() displays 0 if the strings are identical. */
    if (strcmp(string1, string2) == 0){

        printf("These strings are identical.\n"
        "Their length is %i chars.\n", strlen(string1));

    }

    else
    {

        printf("These strings are not identical.\n"
        "Length of the first string is %i char(s).\n"
        "Length of the second string is %i char(s).\n",
        strlen(string1), strlen(string2));

    }

    return 0;

}
