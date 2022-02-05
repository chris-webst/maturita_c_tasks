/*  
    #49
    Write a program which loads a 2D array with ints 
    inserted by the user (5 rows, 4 columns)
    and prints out the sum of them.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* need two for loops --> 2D */

    int a[5][4], i, j, S;  /* rows, columns, iterators, sum */

    printf("Insert 20 ints separated by Enter or Space\n");

    S = 0;

    for(i = 0; i <= 4; i++)
        for(j = 0; j <= 3; j++)
        {
            scanf("%i", &a[i][j]);
            S = S + a[i][j];
        }
    
    printf("Sum = %i\n", S);

    return 0;
}
