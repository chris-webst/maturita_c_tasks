/**
 * #52
 * Write a program that fills a two-dimensional array 
 * (5 rows and 5 columns) with integer values 
 * entered from the keyboard and prints whether
 * the sum of ints above the main diagonal is
 * greater than, smaller than or eqal to the sum
 * of ints below the main diagonal.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[5][5];
    int i;
    int j;
    int above;
    int below;

    above = 0;
    below = 0;

    printf("Insert 25 ints devided by enter\n");

    for(i = 0; i <= 4; i++){

        for(j = 0; j <= 4; j++){

            scanf("%i", &array[i][j]);

            if(i < j){

                above = above + array[i][j];

            }

            else if(i > j){

                below = below + array[i][j];

            }

        }

    }

    if(above > below){

        printf("Count of nums above the main diagonal is greater "
        "that count of nums below tha main diagonal.");

    }

    else if(above < below){

        printf("Count of nums above the main diagonal is smaller "
        "that count of nums below tha main diagonal.");

    }

    else{

        printf("Count of nums above the main diagonal is equal "
        "to count of nums below tha main diagonal.");

    }

    return 0;

}