/**
 * #34
 * Compute the perimeter and the content
 * of a circle determined by the radius
 * given by the user <float>.
 * Use POINTERS and functions for input,
 * computation and displaying the results.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float input(void);
/**
 * Pointers are written in the *p_ form.
 * Here, they are given as parameters
 * of a computing function.
 * They do not pass a concrete value
 * to the function, they pass it a REFERENCE.
 * Hence, it is possible to change the value
 * of this variable changes within the function.
 * This also makes returning more variables
 * from one function possible.
 **/
void computing(float radius, float *p_content, float *p_perimeter);
void display(float content, float perimeter);


int main()
{
    float radius;
    float perimeter_value;
    float content_value;

    radius = input();
    /**
     * We are passing the addresses of content_value
     * and perimeter_value to the function (& character
     * determines that we're passing an address and not
     * the actual value of the variable.
     **/
    computing(radius, &content_value, &perimeter_value);
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

void computing(float radius, float *p_content, float *p_perimeter)
{
    /**
     * Values of content and perimeter
     * variables (at addresses *p_content
     * and *p_perimeter) will be overwritten
     *  accoarding to the following formulas.
     * There is no need to return these values
     * because the change of the values also
     * applies to all spaces outside this function
     * in the program (the whole address value
     * was overwritten).
     * 
     **/
    *p_content = M_PI * radius * radius;
    *p_perimeter = 2 * M_PI * radius;

}

void display(float content, float perimeter)
{
    printf("\nContent of the circle: %.3f square unit(s)", content);
    printf("\nPerimeter of the circle: %.3f unit(s)", perimeter);

}
