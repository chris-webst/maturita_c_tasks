/*  
    #50
    Write a program which loads a 2D array with ints 
    inserted by the user (5 rows, 4 columns)
    and prints out the sum of each row.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* need five for loops --> 2D + 1D array + printing */

    int a[5][4], b[5], i, j; /* 2D array, 1D sum array, iterators, sum */

    printf("Insert 20 ints separated by Enter or Space\n");

    for(i = 0; i <= 4; i++)
        for(j = 0; j <= 3; j++)
        {
            scanf("%i", &a[i][j]);
        }
    
    for(i = 0; i <= 4; i++)
    {
        b[i] = 0;  /* reset the sum on a new row to 0 */
        for(j = 0; j <= 3; j++)
            b[i] = b[i] + a[i][j];
    }

    printf("Sums of the rows:\n");

    for(i = 0; i <= 4; i++)
        printf("%i ", b[i]);

    return 0;
}
