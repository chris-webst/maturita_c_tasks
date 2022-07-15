/**
 * #49
 * Write a program which loads a 2D array with ints 
 * inserted by the user (5 rows, 4 columns)
 * and prints out the sum of them.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[5][4];
    int i;
    int j;
    int sum;

    printf("Insert 20 ints separated by Enter\n");

    sum = 0;

    for(i = 0; i <= 4; i++){

        for(j = 0; j <= 3; j++){

            scanf("%i", &array[i][j]);
            sum = sum + array[i][j];

        }
    }
    
    printf("Sum = %i\n", sum);

    return 0;

}
