/**
 * #09
 * Load the key from the keyboard (letter) <char>. 
 * Display it's char type (assign char1 and char2 types
 * to four random letters and assign char3 to the rest) <str>.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{   
    int again; /* defines variable for the do while cycle */
    char letter; /* given letter/key */
    
    printf("Please enter one of the keys of the keyboard.\n"
    "Make sure you are using english standardized alphabet "
    "(otherwise there is a problem with loading as a char).\n"
    "Can you find all the types (char1/char2/char3) <char>?\n");

    do{

        letter = getchar(); /* loads the key (letter) */
        switch(letter){

        case 'a':

            printf("char1");
            break;

        case 'b':

            printf("char1");
            break;

        case 'c':

            printf("char1");
            break;

        case 'd':

            printf("char2");
            break;

        default:

            printf("char3");
            break;

        }
        
        printf("\nWanna test one more letter? "
        "If so, type the letter you want to test.\nIf not, type 1\n");
        scanf("%i", &again);

    }while(again != 1);

    printf("\nThanks for using my letterator.");

    return 0;

}
