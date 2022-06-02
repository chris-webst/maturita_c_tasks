/**
 * #22
 * Display both the small and large
 * multiplication table using cycles.
 **/

#include <stdio.h>
#include <stdlib.h>


int main()
{   
    int i;
    int j;

    printf("Small multiplication table\n\n");

    for(i = 1; i <= 10; i++){  /* Rows. */

        for(j = 1; j <= 10; j++){  /* Columns. */

            printf("%4i", i * j);

        }
        
        printf("\n");
        
    }
    
    printf("\nLarge multiplication table\n\n");

    for(i = 1; i <= 20; i++){  /* Rows. */

        for(j = 1; j <= 20; j++){  /* Columns. */

            printf("%4i", i * j);

        }
        
        printf("\n");
        
    }

    return 0;

}
