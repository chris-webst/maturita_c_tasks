/**
 * #32
 * Write a program for computing
 * the perimeter and content
 * of the sqare with a side length
 * given by the user.
 * 
 * Use functions (even for the input
 * and displaying the results).
 **/

#include <stdio.h>
#include <stdlib.h>

float input(void);  /* A function that doesn't have arguments. */
float content(float side_length);
float perimeter(float side_length);
/* A funciton that doesn't return anything. */
void display(float content, float perimeter);


int main()
{
    float side;
    /* The variable can't be named "content" because that's the name of a func. */
    float content_value;
    float perimeter_value;

    side = input();
    content_value = content(side);
    perimeter_value = perimeter(side);
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
    
float content(float side_length)
{
    float content;

    content = side_length * side_length;

    return(content);

}

float perimeter(float side_length)
{
    float perimeter;

    perimeter = 4 * side_length;

    return(perimeter);

}

void display(float content, float perimeter)
{
    printf("\nContent of the square: %.3f square unit(s)", content);
    printf("\nPerimeter of the circle: %.3f unit(s)", perimeter);

}
