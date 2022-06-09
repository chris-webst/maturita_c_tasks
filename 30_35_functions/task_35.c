/**
 * #35
 * Compute the perimeter and the content
 * of a square determined by the radius
 * given by the user <float>.
 * Use POINTERS and functions for input,
 * computation and displaying the results.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float input(void);
void computing(float side, float *p_content, float *p_perimeter);
void display(float content, float perimeter);


int main()
{
    float side;
    float perimeter_value;
    float content_value;

    side = input();
    computing(side, &content_value, &perimeter_value);
    display(content_value, perimeter_value);

    return 0;

}

float input(void)
{
    float side;

    printf("\nPlease insert a float number "
    "representing the side length of the square.\n");
    scanf("%f", &side);

    return(side);

}

void computing(float side, float *p_content, float *p_perimeter)
{
    *p_content = side * side;
    *p_perimeter = 4 * side;

}

void display(float content, float perimeter)
{
    printf("\nContent of the square: %.3f square unit(s)", content);
    printf("\nPerimeter of the square: %.3f unit(s)", perimeter);

}
