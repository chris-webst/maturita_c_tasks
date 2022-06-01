#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * #08
 * Load the number of the month of the year <int>. 
 * Display it's name <str>.
 **/

int main()
{   
    int again; /* defines variable for the do while cycle */
    int month; /* defines the number of the given month */
    
    do{
        printf("Please enter a number standing for the month of the year "
        "you want to display <int>.\n"); 
        scanf("%i", &month); /* loads the number month */

        switch(month){
        case 1:

            printf("January");
            break;

        case 2:

            printf("February");
            break;

        case 3:

            printf("March");
            break;

        case 4:

            printf("April");
            break;

        case 5:

            printf("May");
            break;

        case 6:

            printf("June");
            break;

        case 7:

            printf("July");
            break;

        case 8:

            printf("August");
            break;

        case 9:

            printf("September");
            break;

        case 10:

            printf("October");
            break;

        case 11:

            printf("November");
            break;

        case 12:

            printf("December");
            break;

        default:

            printf("Seems like a missclick. Please enter the number of the month again.");
            break;
        }

       printf("\nWanna test one more number? If so, type number 1.\n");
       scanf("%i", &again);
       
    }while(again == 1);

    printf("\nThanks for using my monthator.");

    return 0;

}
