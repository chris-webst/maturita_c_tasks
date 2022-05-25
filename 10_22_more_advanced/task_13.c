#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * #13
 * Load the number n <int>.
 * Display the count of the preview numbers and n <int>.
 **/

int main()
{   int again;
    int for_n;  /* defines the number for iterating */
    int n;  /* defines the number n */
    int count;  /* defines the temporary count */
    
    do{
        printf("\nPlease enter the number n to compute the count first n ints <int>.\n");
        scanf("%i", &n);
        count = 0;
        
        for (for_n = 1; for_n <= n; for_n++){

            /**
             * The count is equal to count from the previous iteration 
             * enlarged by the actual for_n 
            **/
            count = count + for_n;

        }

        printf("The count is equal to %i.\n"
        "Type 1 if you wanna countinue with another n, "
        "type something diffirent and the programme will be finished.", count);
        scanf("%i", &again);
        
    
    }while(again == 1);

    printf("\nThat's all, thanks for using my calculator.");
    
 
    return 0;
}
