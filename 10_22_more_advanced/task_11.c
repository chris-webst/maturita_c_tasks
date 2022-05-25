#include <stdio.h>
#include <stdlib.h>

/**
 * #11
 * A group of non-zero digits ending with zero is given by the user.
 * First number represents the pattern we are looking for in the group.
 * Display how many times the pattern occurs in the group
 * and at which positions.
 **/

int main()
{
    int pattern;
    int number;
    int count;  /* Number of occurrences of the pattern in the group. */
    int index;  /* Iterator used for scanning following numbers of the group. */
    
    index = 1;  /* We're checking the numbers starting with index 1.  */
    count = 0;
    
    printf("Please enter your group of non–zero ints ending with zero.\n"
    "First int represents the pattern the program will be looking for.\n"
    "The program will display how many times and at which positions "
    "of your group the pattern occurs.\n");

    scanf("%i", &pattern);
    scanf("%i", &number);  /* Scans the first number after the pattern. */

    printf("\nPositions:\n");

    while (number != 0){

        if(number == pattern){

            printf("%i ", index);  /* Prints the index of the found occurence. */
            count = count + 1;
            
        }
        
        index = index + 1;  /* Moving on to the number on a higher index. */
        scanf("%i", &number);  /* Scans the next yet unscanned number of the group. */
      
    }
    
    printf("\n\nCount of occurencies:\n%i", count);

    return 0;
}'