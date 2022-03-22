/*  
    #54
    IDs (int) and heights (float) of three students
    are given by the user. Display the ID and height 
    of the highest student.
    Use struct type.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int id;
    float height;

}student;


int main()
{

    student student1; student2; student3;
    int maxid;
    float maxheight;

    printf("Please enter the ID and height of the first student.\n");
    scanf("%i %f", &student1.id, &student1.height);

    printf("Please enter the ID and height of the second student.\n");
    scanf("%i %f", &student2.id, &student2.height);

    printf("Please enter the ID and height of the third student.\n");
    scanf("%i %f", &student2.id, &student2.height);

    // Most basic searching for maximum.
    maxid = student1.id;
    maxheight = student1.height;

    if(student2.height > maxheight){

        maxheight = student2.height;
        maxid = student2.id;

    }

    if (studen3.height > maxheight){

        maxheight = student3.height;
        maxid = student3.id; 

    }

    printf("The highest student has an ID %i and height %.2f.", maxid, maxheight);

    return 0;

}