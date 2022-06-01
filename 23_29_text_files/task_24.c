/**  
 * #24
 * Write a program which loads
 * three ints from the file data.txt
 * (each on a separate line)
 * and prints their sum on the monitor. 
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sum;
    int i;
    int number;
    FILE *fileread;  /* Operating chart for the given (reading) file. */

    sum = 0;

    /**
     * Loading of data.txt (type "read"),
     * initiates operating with the fileread chart.
     **/
    fileread = fopen("data.txt", "r");

    for(i = 0; i < 3; i++){
        
        fscanf(fileread, "%i\n", &number);
        sum = sum + number;

    }

    fclose(fileread);  /* Ends operating with the chart. */
    
    printf("Sum of the three numbers defined in data.txt is equal to %i.", sum);
    
    return 0;

}
