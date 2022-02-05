/*  
    #47
    Write a program that fills a two-dimensional array 
    (5 rows and 4 columns) with integer values entered 
    from the keyboard and writes the largest element 
    of this array to the monitor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5][4], i, j, max;  /* array[rows][columns], iterators, maximum */

    printf("Insert 20 ints separated by Enter\n");

    max = 0;  /* for the case of having at least one int > 0 */

    for(i = 0; i <= 4; i++)
        for(j = 0; j <= 3; j++)
        {
            scanf("%i", &array[i][j]);
            if (array[i][j] > max){
                max = array[i][j];
            };
        }
    
    printf("Maximum of this array is: %i", max);

    return 0;
}
