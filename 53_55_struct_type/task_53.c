 /*  
    #53
    Write a programme that adds two
    complex numbers (four floats representing
    the two complex numbers are given
    by the user – (a1; a2), (b1; b2)) and
    display the sum on the monitor.
    Use struct type.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{  // Definition of the structure (for further substitution).

    float re;  // Represents the real part of the complex number.
    float im;  // Represents the imaginary part of the complex number.

}complex;


int main()
{

    complex first, second, sum;

    printf("Please enter two real numbers representing the first "
            "complex number (in order of real_part, imaginary_part) "
            "separated by space.\n");

    scanf("%f %f", &first.re, &first.im);

    printf("Please enter two real numbers representing the second "
            "complex number (in order of real_part, imaginary_part) "
            "separated by space. The sum of the first and the second "
            "complex number will be displayed.\n");

    scanf("%f %f", &second.re, &second.im);

    sum.re = first.re + second.re;
    sum.im = first.im + second.im;

    printf("\nSum of the given numbers is (%.3f; %.3f).", sum.re, sum.im);

    return 0;

}