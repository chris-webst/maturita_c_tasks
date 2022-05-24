/*  
    #06
    Load three floats
    and display the largest one.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    float float1, float2, float3;

    float maximum;  // Final maximum value.

    printf("Insert three numbers separated by a space or enter"
            "representing the three numbers to be compared (float).\n");

    scanf("%f%f%f", &float1, &float2, &float3);

    maximum = float1;

    if (maximum <= float2){

        maximum = float2;
    
        if (maximum <= float3){

            maximum = float3;

        }

    }

    if (maximum <= float3){

        maximum = float3;
    
        if (maximum <= float2){

            maximum = float2;

        }

    }

    printf("\nMaximum of these these three numbers is %.2f.", maximum);

    return 0;

}