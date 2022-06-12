/**
 * #40
 * Read the text file data.dat line by line
 * and display its contents on the the monitor
 * with the maximal line length of 80.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fileread;  /* Operating chart for the given (reading) file. */
    char oneline[81];  /* 80 chars plus \0 */

    fileread = fopen("data.dat", "r");  /* Reading the text file. */

    /**
     * fgets() will split the data.dat contents
     * into lines of the maximal length of 80 characters.
     * It will scan the file until reaching the \0 character.
     * Its parameters are the end variable (one line of the
     * final printed text), length of the line and the source file.
     **/
    while(fgets(oneline, 80, fileread) != NULL){

        printf("%s\n", oneline);

    }
    
    fclose(fileread);
    
    return 0;

}
