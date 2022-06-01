/**
 * #27
 * Copy all the text from original.txt into copy.txt file.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char letter;
    FILE *fileread;  /* Operating chart for the given (reading) file. */
    FILE *filewrite;  /* Operating chart for the created (writing) file. */

    fileread = fopen("original.txt", "r");
    filewrite = fopen("copy.txt", "w");
    
    letter = getc(fileread);

    /**
     * Loads chars until the \0 
     * (End Of File) character.
     * 
     * Needs to be in this order, otherwise
     * the program loads the EOF character too
     * which will then be printed into copy.txt
     * as an unknown char.*/
    while(letter != EOF){

        putc(letter, filewrite);
        letter = getc(fileread);

    };

    fclose(fileread);
    fclose(filewrite);

}