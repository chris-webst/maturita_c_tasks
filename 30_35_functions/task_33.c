/**
 * #33
 * There are three pairs of floats
 * given by the user, representing
 * the two sides of each of the
 * three rectangles.
 * Compute the content of each of these
 * rectangles and also display the count
 * of these three contents.
 **/

#include <stdio.h>
#include <stdlib.h>


float content(float side_1, float side_2);
float count(float content_values[]);
void display(float content_values[], float count);



int main()
{
    float side_1;
    float side_2;
    float content_values[3];
    float count_value;
    int i;

    for(i = 0; i < 3; i++){

        printf("\nPlease insert two float numbers "
        "representing the side lengths of the rectangles.\n");

        scanf("%f %f", &side_1, &side_2);
        content_values[i] = content(side_1, side_2);

    }

    count_value = count(content_values);
    display(content_values, count_value);

    return 0;

}
    
float content(float side_1, float side_2)
{
    float content_value;

    content_value = side_1 * side_2;

    return(content_value);

}


float count(float content_values[]){

    float count_value;
    int i;

    count_value = 0;

    for(i = 0; i < 3; i++){

        count_value = count_value + content_values[i];

    }

    return count_value;

}

void display(float content_values[], float count)
{
    int i;
    
    for(i = 0; i < 3; i++){
        
        printf("\nContent of the %i. rectangle: %.3f square unit(s)",
        i + 1, content_values[i]);

    }

    printf("\nCount of these contents: %.3f unit(s)", count);

}