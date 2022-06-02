/**
 * #10
 * Write a program that loads chars from the keyboard 
 * and displays them on the monitor.
 * Replace saces with the # char and make the program
 * stop after loading the * char.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char key; /* given char */
    
    printf("Please enter your string (series of chars) ending "
    "with the * char (control ending sequence).\n"
    "Your input will be step by step displayed back on the monitor.\n"
    "Make sure to use the english alphabet (otherwise the "
    "reverse transcript will be broken).\n");

    do{
        key = getchar(); /* loads the char */
        
        if (key == ' '){

            key = '#';
            printf("\n%c", key);

        }
        
        else if(key == '*'){
            
            continue;

        }
        
        else{
            
            printf("\n%c", key);
            
        }
        

    }while(key != '*');

    printf("\nThanks for using my tool, see ya next time.");

    return 0;
}
