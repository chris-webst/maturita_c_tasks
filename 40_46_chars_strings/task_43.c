/**
 * #43
 * Write a program that displays three
 * strings with the maximal size of 10
 * given by the user, sorted lexicographically.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char string_1[11];
    char string_2[11];
    char string_3[11];
    char first[11];
    char second[11];
    char third[11];

    printf("Please enter the three strings separated by "
    "space or enter to be compared.\n");
    scanf("%s %s %s", string_1, string_2, string_3);

    /**
     *  strcmp() returns a negative number
     * if string_1 is lexicographically smaller
     * that string_2.
     **/
    if(strcmp(string_1, string_2) < 0){

        if(strcmp(string_2, string_3) < 0){
            
            /**
             * strcpy() copies the string from
             * the second parameter into the string
             * from the first parameter.
             **/
            strcpy(first, string_1);
            strcpy(second, string_2);
            strcpy(third, string_3);

        }

        else if(strcmp(string_1, string_3) < 0){

            strcpy(first, string_1);
            strcpy(second, string_3);
            strcpy(third, string_2);

        }

        else{

            strcpy(first, string_3);
            strcpy(second, string_1);
            strcpy(third, string_2); 

        }

    }

    else{

        if(strcmp(string_1, string_3) < 0){

            strcpy(first, string_2);
            strcpy(second, string_1);
            strcpy(third, string_3);

        }

        else if(strcmp(string_2, string_3) < 0){

            strcpy(first, string_2);
            strcpy(second, string_3);
            strcpy(third, string_1);

        }

        else{

            strcpy(first, string_3);
            strcpy(second, string_2);
            strcpy(third, string_1); 

        }        

    }

    printf("The final order:\n%s\n%s\n%s", first, second, third);

    return 0;

}