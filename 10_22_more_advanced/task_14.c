#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * Maturita task #14
 * Karolina Podivinska
 * Load the number n <int>. 
 * Display the product of the preview numbers and n <int>.
 **/

int main()
{   int again;
    int for_n; /* defines the number for iterating */
    int n; /* defines the number n */
    int product; /* defines the temporary product */
    
    do{
        printf("Please enter the number n to compute the produt of its precedessors and it <int>.\n"); /* prints a line describing the task for the user */
        scanf("%i", &n); /* loads n */
        product = 1;
        
        if (n == 0){
            product = 0;
        }
        else{
            for (for_n = 1; for_n <= n; for_n++) /* raises for_n by one as long as it is equal or lower than n */
                product = product * for_n; /* The product is equal to product from the previous iteration multiplied by the actual for_n */
        }
        
        again = 0;
        printf("The product is equal to %i. Type 1 if you wanna countinue with another n, type something diffirent and the programme will be finished.", product);
        scanf("%i", &again);
        
    
    }while(again == 1);
    printf("That's all, thanks for using my calculator.");
    
 
    return 0;
}