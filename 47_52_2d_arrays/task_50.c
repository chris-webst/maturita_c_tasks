/**
 * #50
 * Write a program which loads a 2D array with ints 
 * inserted by the user (5 rows, 4 columns)
 * and prints out the sum of each row on the monitor.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[5][4];  /* array[rows][columns] */
    int sums[5];  /* Array for the row sums. */
    int sum;
    int i;
    int j;
    int k;

    printf("Insert 20 ints separated by Enter\n");

    for(i = 0; i <= 4; i++){

        sum = 0;

        for(j = 0; j <= 3; j++){

            scanf("%i", &array[i][j]);
            sum = sum + array[i][j];

        }

        sums[i] = sum;

    }

    for(k = 0; k <= 4; k++){

        printf("Sum of the %i. row is %i.\n", (k + 1), sums[k]);
        
    }

    return 0;

}
