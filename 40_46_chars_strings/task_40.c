/*  
    #40
    Read the text file data.dat line by line
    and display on the the monitor with the
    rule of maximal line length of 80.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char oneline[81];  // 80 chars plus \0
    fr = fopen("data.dat", "r");  // Reading the text file.
    // fgets() parameters are end variable, length, source file.
    while(fgets(oneline, 80, fr) != NULL)  // Read until reaching the \0 character.
    {

        printf("%s", oneline);  // Print the first 80 chars into one line.

    }

}