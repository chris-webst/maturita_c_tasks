/**
 * #38
 * With the help of the array type,
 * write a program that loads
 * ten-element vector of integers
 * given by the user and reorganizes
 * its elements so that the first
 * element will be last, the secon
 * will be second last and so on.
 * Display the final vector on the monitor.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int vector[10];
    int i;
    int j;
    int k;
    int help_variable;

    printf("Please insert the ten ints representing the vector.\n");

    for(i = 0; i < 10; i++){

        scanf("%i", &vector[i]);

    }

    for(j = 0; j < 5; j++){

        help_variable = vector[j];
        vector[j] = vector[9 - j];
        vector[9 - j] = help_variable;

    }

    printf("The final vector:\n");

    for(k = 0; k < 10; k++){

        printf("%i ", vector[k]);

    }

    return 0;

}
