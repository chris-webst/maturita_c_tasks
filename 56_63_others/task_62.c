#include <stdio.h>
#include <stdlib.h>

/*
    #62
    Load user int inputs into a 2D array (4 rows, 3 columns)
    and a 1D array (size of 3). Display a 1D array interpretting
    the product of the 2D and 1D loaded arrays (matrix times vector).
*/

int main(){

    int load_matrix[4][3], load_vector[3], output_vector[4], i, j, k, l, m, n, count;

    printf("Please enter 12 numbers to load the matrix\n");
    for(i = 0; i < 4; i++){  /* loading the matrix */

        for(j = 0; j < 3; j++){

            scanf("%i", &load_matrix[i][j]);

        }
    }

    printf("\nPlease enter 3 numbers to load the vector\n");
    for(k = 0; k < 3; k++){  /* loading the vector */

        scanf("%i", &load_vector[k]);

    }

    for(l = 0; l < 4; l++){  /* computing output vector values */

        count = 0;

        for(m = 0; m < 3; m++){

            count = count + load_matrix[l][m]*load_vector[m];

        }

        output_vector[l] = count;

    }

    for(n = 0; n < 4; n++){  /* displaying the output vector */

        printf("\n%i\n", output_vector[n]);

    }
    
    return 0;
}