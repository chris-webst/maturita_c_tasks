/**  
 * #25
 * Write a program which loads
 * the first five chars from the file chars.txt
 * and prints them into a file copy.txt.  
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    char letter;
    FILE *fileread;  /* Operating chart for the given (reading) file. */
    FILE *filewrite;  /* Operating chart for the created (writing) file. */

    fileread = fopen("chars.txt", "r");
    filewrite = fopen("copy.txt", "w");

    for(i = 0; i < 5; i++){
        
        letter = getc(fileread);  /* Gets the character from chars.txt. */
        putc(letter, filewrite);  /* Writes the character into copy.txt. */

    }

    fclose(fileread);
    fclose(filewrite);

}