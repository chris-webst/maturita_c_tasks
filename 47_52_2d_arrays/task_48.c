/**
 * #48
 * Write a program that fills a two-dimensional array 
 * (5 rows and 4 columns) with integer values 
 * entered from the keyboard and prints the maximum element 
 * from each row to the monitor.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[5][4];  /* array[rows][columns] */
    int biggest[5];  /* Array for the row maximums. */
    int i;
    int j;
    int k;
    int max;

    printf("Insert 20 ints separated by Enter\n");

    for(i = 0; i <= 4; i++){

        for(j = 0; j <= 3; j++){

            scanf("%i", &array[i][j]);

            if(j == 0){

                max = array[i][j];

            }

            else if (array[i][j] > max){

                max = array[i][j];

            }

        }

        biggest[i] = max;

    }
    
    for(k = 0; k <= 4; k++){
    
        printf("\nMaximum of the %i. row is %i.", (k + 1), biggest[k]);
        
    }

    return 0;

}
