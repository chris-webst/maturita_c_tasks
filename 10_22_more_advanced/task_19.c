#include <stdio.h>
#include <stdlib.h>

/**
 * #19
 * Load two positive ints.
 * Display their ratio and remainder
 * using just substraction.
 **/

int main()
{   
    int again;
    int dividend;
    int divisor;
    int remainer;
    int ratio;
    
    do{

        ratio = 0;
        
        do{

            printf("Please enter two positive ints representing "
            "the dividend and the divisor (in this order)\n"
            "to compute integer division and remainer.\n");

            scanf("%i %i", &dividend, &divisor);

        }while((dividend < 0) || (divisor <= 0));

        remainer = dividend;

        while(remainer >= divisor){

            remainer = remainer - divisor;
            ratio = ratio + 1;

        }
        
        again = 0;
        printf("The ratio is equal to %i. The remainer is %i.\n"
        "Type 1 if you wanna countinue with another two numbers, "
        "type something else and the program will be finished.", ratio, remainer);
        scanf("%i", &again);
        
    
    }while(again == 1);

    printf("That's all, thanks for using my calculator.");
 
    return 0;
}
