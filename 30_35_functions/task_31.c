/**
 * #31
 * An int is given by the user.
 * Calculate the square and cube of this number
 * and comper the results.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power(int power, int base);
int greater(int first, int second);


int main()
{
    int number;
    int square;
    int cube;

    printf("Please enter an int to compute and compare its square and cube.");
    scanf("%i", &number);

    square = power(2, number);
    printf("\nSquare of this number is equal to %i.", square);

    cube = power(3, number);
    printf("\nCube of this number is equal to %i.", cube);

    greater(square, cube);

}

int power(int power, int base){

    int result;
    int i;

    result = 1;

    if(power != 0){
        
        for(i = 0; i < abs(power); i++){

            result = result * base;

        }

    }

    return result;

}

int greater(int first, int second){

    if(first > second){

        printf("\nSqare of this number is greater than its cube.");

    }

    else if(second > first){

        printf("\nCube of this number is greater than its square.");  

    }

    else{

        printf("\nCube and square of this number have same value.");

    }
    
    return 0;

}