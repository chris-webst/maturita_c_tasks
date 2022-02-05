#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    #13
    Load the number n <int>. 
    Display the count of the preview numbers and n <int>.
 */

int main()
{   int again;
    int for_n; /* defines the number for iterating */
    int n; /* defines the number n */
    int count; /* defines the temporary count */
    
    do{
        printf("Please enter the number n to compute the count of its precedessors and it <int>.\n"); /* prints a line describing the task for the user */
        scanf("%i", &n); /* loads n */
        count = 0;
        
        for (for_n = 0; for_n <= n; for_n++) /* raises for_n by one as long as it is equal or lower than n */
            count = count + for_n; /* The count is equal to count from the previous iteration enlarged by the actual for_n */
        
        again = 0;
        printf("The count is equal to %i. Type 1 if you wanna countinue with another n, type something diffirent and the programme will be finished.", count);
        scanf("%i", &again);
        
    
    }while(again == 1);
    printf("That's all, thanks for using my calculator.");
    
 
    return 0;
}