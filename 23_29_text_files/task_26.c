/**  
 * #26
 * Write a program which reads
 * one line of the letter.txt file
 * and rewrites it (with the newline
 * character) onto monitor.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char letter;
    int iterator;
    int loop;
    /* Array for collecting chars for final print (max 83 chars in oneline). */
    char line[84];
    FILE *fileread;  /* Operating chart for the given (reading) file. */

    fileread = fopen("letter.txt", "r");
    iterator = 0;

    do{
        
        letter = getc(fileread);  /* Gets the character from letter.txt. */
        line[iterator] = letter;  /* Stores the letter in the "line" array. */
        /**
         * Raises the value of the iterator by one
         * so next letter could be stored at following array index
         **/
        iterator = iterator + 1; 

    }while(letter != '\n');

    /* At this stage, work with the file is done, everything needed is stored. */
    fclose(fileread);
    
    /**
     * Iterator was raised for the expected loop 
     * which wasn't allowed to process 
     * due to the loop condition so there are chars
     * stored at indexes up to index of the "index" - 1 value.
     **/
    for(loop = 0; loop < (iterator - 1); loop++){
        
        /**
         * When programmed like this,
         * the letters will be printed
         * as a line even if they're
         * being displayed char by char.
         **/
        printf("%c", line[loop]);
        
    }
    
    /**
     * The program read that there's \n
     * in the text but won't display it
     * on its own so it needs to be printed
     * manually like this. 
     **/
    printf("\\n");

    return 0;

}