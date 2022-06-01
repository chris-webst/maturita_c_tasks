#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * #07
 * Load the coefficients of the quadratic equation <float>. 
 * Display it's solution(s) <float>.
 **/

int main()

{   
    /**
     * Defines new floats standing for the coefficients,
     * discriminant and the solutions of the quadratic equation 
     **/
    int again;
    float coef_a;
    float coef_b;
    float coef_c;
    float discriminant;
    float solution_1;
    float solution_2;
    
    do{
        /* prints a line describing the task for the user */
        printf("Please enter three numbers (separated by a space) "
        "standing for the coefficients of the quadratic equation <float>.\n");
        /* loads the length of the edge of the cube entered by the user */
        scanf("%f %f %f", &coef_a, &coef_b, &coef_c);

        discriminant = (coef_b*coef_b)-(4*coef_a*coef_c);

        if (discriminant < 0) {

            printf("This equation has no solution.\n");
            printf("Maybe you will be more successfull next time. "
            "Type 1 if you wanna countinue with another equation, "
            "type something diffirent and the programme will be finished.");
            scanf("%i", &again);
        
        }

        else if (discriminant == 0) {

            solution_1 = (-coef_b)/(2*coef_a);
            printf("This equation has one solution: %f\n", solution_1);
            printf("Now you have your solution. "
            "Type 1 if you wanna countinue with another equation, "
            "type something diffirent and the programme will be finished.");
            scanf("%i", &again);
        
        }

        else {
            
            if (coef_a != 0){

                solution_1 = (-coef_b+sqrt(discriminant))/(2*coef_a);
                solution_2 = (-coef_b-sqrt(discriminant))/(2*coef_a);
                printf("This equation has two solutions: %f and %f\n", solution_1, solution_2);
                printf("Now you have your solutions. "
                "Type 1 if you wanna countinue with another equation, "
                "type something diffirent and the programme will be finished.");
                scanf("%i", &again);
            }
            
            else{
                
                printf("This is not a quadratic equation. Please try again with valid a coeficient.\n");
                printf("Type 1 if you wanna countinue with another equation, "
                "type something diffirent and the programme will be finished.");
                scanf("%i", &again);
                
            }

        }
    
    }while(again == 1);

    printf("That's all, thanks for using my calculator.");
 
    return 0;

}
