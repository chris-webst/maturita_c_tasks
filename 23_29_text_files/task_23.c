/**  
 * #23
 * Create a file experiment.txt
 * and print into it numbers 1–10;
 * each on one line.  
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    FILE *filewrite;  /* Operating chart for the created (writing) file. */

    /**
     * Creation of experiment.txt (type "write"),
     * initiates operating with the filewrite chart.
     **/
    filewrite = fopen("experiment.txt", "w");

    for(i = 1; i <= 10; i++){
        
        fprintf(filewrite, "%i\n", i);

    }

    fclose(filewrite);  /* Ends operating with the chart. */

}