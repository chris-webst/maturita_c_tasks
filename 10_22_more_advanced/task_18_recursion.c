/**
 * #18
 * Load n <int> and display n! (n factorial) using recursion.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * This function returns ints and has one int as an atribut.
 * 
 * The function is called as long as the number n is lowered to 1.
 * In the first iteration, let's say n is equal to 5.
 * 5 != 1 so the function will return the product of 5 and
 * returned value of the function run with 4 which returns
 * the value of the product of 4 and returned value of the function
 * run with 3 and so on.
 * 
 * When the function is run for number 2; it returns the product
 * of 2 and 1 which ends the program and the final product
 * (consisting of computations of other products) is displayed
 * (defined in the main function).
 **/
int factorial(int n){

    if(n == 1){

        return 1;

    }

    else{

        return n * factorial(n - 1);

    }

}

int main()
{   
    int again;
    int n;

   do{
       
        do{
            
            printf("\nPlease enter number n <positive int> do display n!.\n");
            scanf("%i", &n);
            
        }while(n <= 0);
        
        again = 0;
        printf("n! is equal to %i.\n"
        "Type 1 if you wanna countinue with another n, "
        "type something else and the program will be finished.", factorial(n));
        scanf("%i", &again);
    
    }while(again == 1);

    printf("That's all, thanks for using my calculator.");

    return 0;

}
