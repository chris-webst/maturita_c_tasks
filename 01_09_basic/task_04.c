/*  
    #03
    Load three ints representing
    sides of a triangle and display
    whether such a triangle is right
    or not (the biggest angle is 90 degrees). 
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int side1, side2, side3;
    int isright, maxim, minim, middle;

    isright = 0;

    printf("Insert three numbers separated by a space or enter"
            "representing sides of a triangle (int)\n");

    scanf("%i%i%i", &side1, &side2, &side3);

    if(side1 * side1 == side2 * side2 + side3 * side3){

        printf("This triangle is right with the longest side %i.", side1);

    }

    else if(side2 * side2 == side1 * side1 + side3 * side3){

        printf("This triangle is right with the longest side %i.", side2);

    }

    else if(side3 * side3 == side1 * side1 + side2 * side2){

        printf("This triangle is right with the longest side %i.", side3);

    }

    else{

        printf("This triangle is not right.");

    }

    return 0;

}