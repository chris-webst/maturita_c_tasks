#include <stdio.h>
#include <stdlib.h>

/**
 * #21
 * Load a natural number n.
 * Compute its square without
 * using the multiplication operation.
 **/

int main()
{   
    int again;
    int n;
    int i;
    int square;
    
    do{
        square = 0;
        
        do{

            printf("Please enter a natural number n to compute its square.\n");

            scanf("%i", &n);

        }while(n <= 0);  /* User input check. */

        for(i = 0; i < n; i++){

            square = square + n;

        }
        
        again = 0;
        printf("Square of this number is equal to %i.\n"
        "Type 1 if you wanna countinue with another n, "
        "type something else and the program will be finished.", square);
        scanf("%i", &again);
        
    
    }while(again == 1);

    printf("That's all, thanks for using my calculator.");
 
    return 0;
}