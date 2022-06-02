/**
 * #13
 * Load the number n <int>.
 * Display the count of the preview numbers and n <int>.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{   
    int again;
    int for_n;
    int n;
    int count;
    
    do{
        printf("\nPlease enter n <int> to compute the count first n ints.\n");
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
