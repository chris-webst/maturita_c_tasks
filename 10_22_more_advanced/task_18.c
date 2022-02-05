#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    #18
    Load the numbers <int> until the user enters 0. 
    Display the count of all the submitted numbers <int>.
 */

int main()
{   int again;
    int n; /* defines the number n */
    int count; /* defines the temporary count */
    
    do{
        count = 0;
        do{
            printf("Please enter a number you want to include in your count <int> If you type 0; the final count will be displayed.\n"); /* prints a line describing the task for the user */
            scanf("%i", &n); /* loads n */
            count = count + n; /*  */
        
        }while(n != 0);
        
        again = 0;
        printf("The count is equal to %i. Type 1 if you wanna countinue with another n, type something diffirent and the programme will be finished.", count);
        scanf("%i", &again);
        
    
    }while(again == 1);
    printf("That's all, thanks for using my calculator.");
    
 
    return 0;
}