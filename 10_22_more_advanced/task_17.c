/**
 * #17
 * Load a group of ints ending with zero.
 * Display their arithmetic mean.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{   
    int again;
    int number;
    int counter;  /* Counts of the loaded numbers (with the ending zero). */
    float armean;
    
    do{
        armean = 0;  /* Needs to be set here for possible reuse. */
        counter = 0;

        printf("Please enter a group of ints ending with zero "
        "to display their arithmetic mean.\n");
        
        do{

            scanf("%i", &number);

            armean = armean + number;
            counter = counter + 1;

        }while(number != 0);

        armean = armean/(counter - 1);  /* Doesn't include the ending zero. */
        
        again = 0;
        printf("The arithmetic mean is equal to %.2f.\n"
        "Type 1 if you wanna countinue with another group of numbers, "
        "type something diffirent and the programme will be finished.", armean);
        scanf("%i", &again);
        
    
    }while(again == 1);

    printf("That's all, thanks for using my calculator.");
 
    return 0;

}
