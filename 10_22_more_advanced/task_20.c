#include <stdio.h>
#include <stdlib.h>

/**
 * #20
 * Find the greatest common divisor
 * of two positive integers using Euclid's algorithm.
 **/

/**
 * Euclid's algorithm is an efficient method for computing
 * the greatest common divisor (GCD) of two positive ints
 * (the largest number that divides them both without a remainder).
 * 
 * It is named after the ancient Greek mathematician Euclid,
 * who first described it in his Elements (c. 300 BC).
 * 
 * It is an example of an algorithm, a step-by-step procedure
 * based on the principle that the greatest common divisor
 * of two numbers does not change if the larger number is replaced
 * by its difference with the smaller number.
 * 
 * <https://en.wikipedia.org/wiki/Euclidean_algorithm>
 * 
 * ALGORITHM ITSELF
 * Let us be given two natural numbers, stored in the variables u and w.
 * Until w is zero, repeat:
 *  Store the remainder after dividing the number u by the number w in variable r.
 *  Store value of w in variable u.
 *  Store value of r in variable w.
 * The end of the algorithm, GCD is stored in the u variable.
 * 
 * <https://cs.wikipedia.org/wiki/Eukleid%C5%AFv_algoritmus>
 * 
 **/

int main()
{   
    int again;
    int first;
    int second;
    int remainer;
    
    do{
        
        do{

            printf("Please enter two positive ints representing "
            "numbers of which you want to compute the GCD.\n");

            scanf("%i %i", &first, &second);

        }while((first <= 0) || (second <= 0));
        
        while(second > 0){

            remainer = first % second;
            first = second;
            second = remainer;

        }

        again = 0;
        printf("GCD of these numbers is equal to %i.\n"
        "Type 1 if you wanna countinue with another two numbers, "
        "type something else and the program will be finished.", first);
        scanf("%i", &again);
        
    
    }while(again == 1);

    printf("That's all, thanks for using my calculator.");
 
    return 0;
}