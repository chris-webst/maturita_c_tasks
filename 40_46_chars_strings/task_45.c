/**
 * #45
 * Write a program that displays
 * the count of vowels, consonants,
 * digits and other characters
 * of the given string.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** IMPORTANT! Have this line before main()! Caused a lot of problems... **/
int what(char character, char array[]);


int main()
{
    char word[] = "Hello my 2 fellow beings!";
    
    char vowels[] = "aeiyouAEIYOU";
    char consonants[] = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
    char digits[] = "0123456789";

    int v = 0;
    int c = 0;
    int d = 0;
    int o = 0;

    int i;

    printf("This is your string: %s\n", word);

    for(i = 0; word[i] != '\0'; i++){

        if(what(word[i], vowels) == 1){

            v = v + 1;

        }

        else if(what(word[i], consonants) == 1){

            c = c + 1;

        }

        else if(what(word[i], digits) == 1){

            d = d + 1;

        }

        else{

            o = o + 1;

        }
        
    }

    printf("\nSum of vowels: %i\n"
    "Sum of consonants: %i\n"
    "Sum of digits: %i\n"
    "Sum of other characters: %i",
    v, c, d, o);

    return 0;

}

int what(char character, char array[])
{
    int j;

    for(j = 0; array[j] != '\0'; j++){  

        if(array[j] == character){

            return 1;
    
        }

    }
    
    return 0;

}