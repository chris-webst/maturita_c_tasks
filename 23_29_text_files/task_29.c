/**  
 * #29
 * Write a program that counts the number
 * of digits, spaces, \ts, \ns and other chars
 * of the file input.txt.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int digits;
    int tabs;
    int newlines;
    int spaces;
    int chars;
    char letter;
    FILE *fileread;  /* Operating chart for the given (reading) file. */
    
    digits = 0;
    tabs = 0;
    newlines = 0;
    spaces = 0;
    chars = 0;

    fileread = fopen("input.txt", "r");

    do{

        letter = getc(fileread);

        switch (letter){
        case '0':
            digits = digits + 1;
            break;

        case '1':
            digits = digits + 1;
            break;

        case '2':
            digits = digits + 1;
            break;
        
        case '3':
            digits = digits + 1;
            break;

        case '4':
            digits = digits + 1;
            break;
        
        case '5':
            digits = digits + 1;
            break;

        case '6':
            digits = digits + 1;
            break;
        
        case '7':
            digits = digits + 1;
            break;
        
        case '8':
            digits = digits + 1;
            break;
        
        case '9':
            digits = digits + 1;
            break;
        
        case '\n':
            newlines = newlines + 1;
            break;
        
        case '\t':  /* However, for some reason can't identify \ts. */
            tabs = tabs + 1;
            break;

        case ' ':
            spaces = spaces + 1;
            break;
        
        default:
            chars = chars + 1;
            break;
        }

    }while(letter != EOF);

    fclose(fileread);  /* Ends operating with the chart. */

    printf("Digits: %i\n"
    "Tab characters: %i\n"
    "Newline characters: %i\n"
    "Spaces: %i\n"
    "Other characters: %i", digits, tabs, newlines, spaces, chars);

    return 0;

}
