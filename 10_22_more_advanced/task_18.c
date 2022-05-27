#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    #18
    Load n <int> and display n! (n factorial).
 */

int main()
{   
    int again;
    int iterator;
    int n;
    int factorial;

   do{
       
        printf("\nPlease enter number n <int> do display n! (n factorial).\n");
        scanf("%i", &n);
    
        factorial = 1;

        for(iterator = 1; iterator <= n; iterator++){

            factorial = factorial * iterator;

        }
        
        again = 0;
        printf("n! is equal to %i.\n"
        "Type 1 if you wanna countinue with another n, "
        "type something else and the program will be finished.", factorial);
        scanf("%i", &again);
    
    }while(again == 1);

    printf("That's all, thanks for using my calculator.");

    return 0;
}
