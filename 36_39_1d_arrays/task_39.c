/**
 * #39
 * With the help of the array type,
 * write a program that loads
 * two four–element vectors and
 * computes their scalar product.
 * Also display whether the vectors
 * perpendicular to each other.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int vector_1[4];
    int vector_2[4];
    int i;
    int j;
    int k;
    int product;

    product = 0;

    printf("Please insert the four ints representing the first vector.\n");

    for(i = 0; i < 4; i++){

        scanf("%i", &vector_1[i]);

    }

    printf("\nPlease insert the four ints representing the second vector.\n");

    for(j = 0; j < 4; j++){

        scanf("%i", &vector_2[j]);

    }
    
    /**
     * The  scalar product of two vectors
     * is computed as the sum of of the individual
     * elements located at the same position 
     * in both vectors multiplied by each other.
     * 
     * Therefore, if the value is zero for each position
     * in at least one of the arrays, the scalar product
     * is zero and the vectors are perpendicular to each other.
     **/
    for(k = 0; k < 4; k++){

        product = product + vector_1[k] * vector_2[k];

    }

    printf("\nThe scalar product of these vector is equal to %i.", product);

    if(product == 0){

        printf("\nThese vectors are perpendicular to each other.");

    }

    else{

        printf("\nThese vectors are not perpendicular to each other.");

    }

    return 0;

}