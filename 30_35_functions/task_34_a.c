/**
 * #34
 * Compute the perimeter and the content
 * of a circle determined by the radius
 * given by the user <float>.
 * Use functions for input, perimeter
 * computation, content computation
 * and output (displaying the results).
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float input(void);
float content(float radius);
float perimeter(float radius);
void display(float content, float perimeter);


int main()
{
    float radius;
    float perimeter_value;
    float content_value;

    radius = input();
    perimeter_value = perimeter(radius);
    content_value = content(radius);
    display(content_value, perimeter_value);

    return 0;

}

float input(void)
{
    float radius;

    printf("\nPlease insert a float number "
    "representing the radius of the circle.\n");
    scanf("%f", &radius);

    return(radius);

}

float content(float radius)
{
    float content;

    content = M_PI * radius * radius;

    return(content);

}

float perimeter(float radius)
{
    float perimeter;

    perimeter = 2 * M_PI * radius;

    return(perimeter);

}

void display(float content, float perimeter)
{
    printf("\nContent of the square: %.3f square unit(s)", content);
    printf("\nPerimeter of the circle: %.3f unit(s)", perimeter);

}