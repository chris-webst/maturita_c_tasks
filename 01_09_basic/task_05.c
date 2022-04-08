/*  
    #05
    Load three ints representing
    sides of a triangle and display
    whether such a triangle is equilateral,
    isosceles or general. 
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int side1, side2, side3;

    int iswhat = 0;  // 0 – general, 1 – isosceles, 2 – equilateral

    printf("Insert three numbers separated by a space or enter"
            "representing sides of a triangle (int)\n");

    scanf("%i%i%i", &side1, &side2, &side3);

    if(side1 == side2){

        iswhat = 1;

        if(side1 == side3){

            iswhat = 2;

        }

    }

    else if(side1 == side3){

        iswhat = 1;

    }

    else if(side2 == side3){

        iswhat = 1;

    }

    switch (iswhat)
    {
        
    case 0:

        printf("\nThis triangle is general.");
        break;
    
    case 1:

        printf("\nThis triangle is isosceles.");
        break;
    
    default:

        printf("\nThis triangle is equilateral.");

    }

    return 0;

}