/**
 * #37
 * With the help of the array type,
 * write a program that loads
 * ten-element vector of integers
 * given by the user and creates
 * a five–element vector where
 * the first element will be
 * the sum of the first and last
 * number from the loaded vector.
 * Display the final vector
 * on the monitor.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int vector[10];
    int final[5];
    int i;
    int j;
    int k;

    printf("Please insert the ten ints representing the vector "
    "of which you want to create the five–element vector.\n");

    for(i = 0; i < 10; i++){

        scanf("%i", &vector[i]);

    }

    for(j = 0; j < 5; j++){

        final[j] = vector[j] + vector[9 - j];

    }

    printf("The final vector:\n");

    for(k = 0; k < 5; k++){

        printf("%i ", final[k]);

    }

    return 0;

}