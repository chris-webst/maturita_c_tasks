/**
 * #36
 * With the help of the array type,
 * write a program that loads
 * ten-element vector of integers
 * given by the user, finds its
 * minimum and maximum and also
 * displays the difference between
 * this maximum and minimum on the monitor.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int vector[10];
    int i;
    int j;
    int maximum;
    int minimum;

    printf("Please insert the ten ints representing the vector "
    "of which you want to compute the minimum and maximum. "
    "The difference between the minimum and maximum will be displayed, too.\n");

    for(i = 0; i < 10; i++){

        scanf("%i", &vector[i]);

    }

    maximum = vector[0];
    minimum = vector[0];

    for(j = 1; j < 10; j++){

        if(vector[j] >= maximum){

            maximum = vector[j];

        }

        if(vector[j] <= minimum){

            minimum = vector[j];

        }

    }

    printf("The maximum of this vector is equal to %i.\n"
    "The minimum of this vector is equal to %i.\n"
    "The difference between the maximum and minimum is equal to %i.",
    maximum, minimum, maximum - minimum);

    return 0;

}