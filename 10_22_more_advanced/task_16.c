/**
 * #16
 * Load a group of positive ints ending with zero.
 * Display maximum of those numbers.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{   
    int again;
    int number;
    int maximum;
    
    do{
        maximum = 0;  /* Needs to be set here for possible reuse. */

        printf("Please enter a group of positive ints ending with zero "
        " to display the maximum.\n");
        
        do{

            scanf("%i", &number);

            if(number > maximum){

                maximum = number;

            }

        }while(number != 0);
        
        again = 0;
        printf("The maximum is equal to %i.\n"
        "Type 1 if you wanna countinue with another group of numbers, "
        "type something diffirent and the programme will be finished.", maximum);
        scanf("%i", &again);
        
    
    }while(again == 1);

    printf("That's all, thanks for using my calculator.");
 
    return 0;

}
