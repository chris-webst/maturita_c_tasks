/**
 * #51
 * Write a program which loads a 2D array (10 rows,
 * 10 columns with just zeroes plus ones on the
 * main diagonal and display the array on the monitor.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[5][4];  /* array[rows][columns] */
    int sum;
    int i;
    int j;

    for(i = 0; i <= 9; i++){
        
        for(j = 0; j <= 9; j++){

            if(i == j){

                array[i][j] = 1;

            }

            else{

                array[i][j] = 0;

            }
            
            printf("%i ", array[i][j]);

        }

        printf("\n");

    }

    return 0;

}