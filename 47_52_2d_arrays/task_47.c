/**
 * #47
 * Write a program that fills a two-dimensional array 
 * (5 rows and 4 columns) with integer values entered 
 * from the keyboard and writes the largest element 
 * of this array to the monitor.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[5][4];  /* array[rows][columns] */
    int i;
    int j;
    int max;

    printf("Insert 20 ints separated by Enter\n");

    for(i = 0; i <= 4; i++){

        for(j = 0; j <= 3; j++){

            scanf("%i", &array[i][j]);

            if(i == 0 && j == 0){

                max = array[i][j];

            }

            else if (array[i][j] > max){

                max = array[i][j];

            }
            
        }
    }

    printf("Maximum of this array is %i.", max);

    return 0;

}
