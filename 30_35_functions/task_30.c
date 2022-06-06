/**
 * #30
 * Write a program that that calculates
 * the maximum of three different triplets
 * of numbers three times in a row using funcs.
 * Then calculate the final maximum of the three
 * found maximums.
 * 
 * Load the triplets from the user,
 * display the result on the monitor.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maximum(int first, int second, int third);


int main()
{
    int first;
    int second;
    int third;
    int i;
    int maximums[3];

    for(i = 0; i <3; i++){
        
        printf("\n%i. ROUND\nPlease enter three numbers <int> to compute their maximum.", i + 1);
        scanf("%i %i %i", &first, &second, &third);

        maximums[i] = maximum(first, second, third);
    
    }

    printf("The final maximum is equal to %i.", maximum(maximums[0], maximums[1], maximums[2]));
    
    return 0;

}

int maximum(int first, int second, int third)
{
    int maximum;

    maximum = first;

    if(second >= maximum){

        if(third >= second){

            maximum = third;

        }

        else{

            maximum = second;

        }

    }

    else if(third >= maximum){

        maximum = third;

    }

    return maximum;

}
