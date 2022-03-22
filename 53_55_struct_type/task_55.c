/*  
    #55
    IDs (int) and salaries (float) of five employees
    are given by the user. Display the ID and salary 
    of the student with the highest salary.
    Use struct and array type.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int id;
    float salary;

}employee;


int main()
{

    employee array[5];
    int maxid, i, j;
    float maxsalary;

    printf("Insert the IDs and salaries one by one "
            "(space between ID and salary, then enter).\n");

    for(i = 0; i < 5; i++){

        scanf("\n%i %f", &array[i].id, &array[i].salary);

    }


    // Intermediate searching for maximum.
    maxid = array[0].id;
    maxsalary = array[0].salary;

    for(j = 1; j < 5; j++){

        if(array[j].salary > maxsalary){
            
            maxid = array[j].id;
            maxsalary = array[j].salary;

        }

    }

    printf("The richest employee has an ID %i and salary %.2f.", maxid, maxsalary);

    return 0;

}