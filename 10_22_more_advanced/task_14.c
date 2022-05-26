#include <stdio.h>
#include <stdlib.h>

/**
 * #14
 * Load a group of ints ending with zero.
 * Display the sum of the loaded numbers.
 **/

int main()
{   
    int again;
    int number;
    int sum;
    
    do{
        sum = 0;  /* Needs to be set here for possible reuse. */

        printf("Please enter a group of ints ending with zero "
        "to display their sum.\n");
        
        do{

            scanf("%i", &number);
            sum = sum + number;

        }while(number != 0);
        
        again = 0;
        printf("The sum is equal to %i. "
        "Type 1 if you wanna countinue with another n, "
        "type something diffirent and the programme will be finished.", sum);
        scanf("%i", &again);
        
    
    }while(again == 1);
    
    printf("That's all, thanks for using my calculator.");
 
    return 0;
}
