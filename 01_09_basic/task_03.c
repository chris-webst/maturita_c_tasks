/*  
    #03
    Load three floats representing
    sides of a triangle and display
    whether such a triangle can be
    constructed or not. 
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    float side1, side2, side3;
    int i, isconstructable;

    isconstructable = 0;

    printf("Insert three numbers separated by a space or enter"
            "representing sides of a triangle (float)\n");

    scanf("%f%f%f", &side1, &side2, &side3);

    if(side1 + side2 > side3){

        if(side2 + side3 > side1){

            if(side1 + side3 > side2){

                isconstructable = 1;

            }
        }

    }

    if(isconstructable == 1){
        
        printf("\nThis triangle could be constructed.");

    }

    else{

        printf("\nThis triangle could not be constructed.");

    }

    return 0;

}