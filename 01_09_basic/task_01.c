/*  
    #01
    Write a program that loads an integer
    as a length of a cube edge and displays
    its surface, volume and length of both
    face and internal diagonal. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int edge, surface, volume;  // These will always be integers.
    float face_dia, inter_dia;  // These could be both integers and floats.

    printf("Insert an integer representing the length of an"
    " edge of a cube. Then the surface, volume, length of the"
    " face diagonal and length of the internal diagonal of a"
    " cube determined by this edge length will be displayed.\n");

    scanf("%i", &edge);

    surface = 6 * edge * edge;
    volume = edge * edge * edge;
    face_dia = sqrt(2 * edge * edge);
    inter_dia = sqrt(3 * edge * edge);

    printf("\nSurface: %i sqare units\n", surface);
    printf("Volume: %i cubic units\n", volume);
    printf("Length of the face diagonal: %.2f units\n", face_dia);
    printf("Length of the internal diagonal: %.2f units", inter_dia);

    return 0;

}