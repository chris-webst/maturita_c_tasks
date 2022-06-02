/**  
 * #28
 * Write a program that counts the number
 * of words, lines and chars written
 * in the count.txt file.
 * 
 * Consider a word a sequence of chars
 * without \t or \n chars.  
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int words;
    int lines;
    int chars;
    char letter;
    FILE *fileread;  /* Operating chart for the given (reading) file. */
    
    lines = 0;
    chars = 0;
    words = 0;

    fileread = fopen("count.txt", "r");

    do{

        letter = getc(fileread);
        chars = chars + 1;

        if(letter == '\n'){

            lines = lines + 1;
            /* Assumes that the last char before \n is not a space. */
            words = words + 1;

        }

        else if(letter == ' '){

            words = words + 1;

        }

        /* However, for some reason can't identify \ts. */
        else if(letter == '\t'){

            words = words + 1;

        }

        else if(letter == EOF){

            words = words + 1;
            lines = lines + 1;

        }

    }while(letter != EOF);

    fclose(fileread);  /* Ends operating with the chart. */

    printf("Lines: %i\nWords: %i\nChars: %i", lines, words, chars);

    return 0;

}
