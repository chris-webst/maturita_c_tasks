#include <stdio.h>
#include <stdlib.h>

/**
 * #12
 * Display the temperature table on the monitor
 * (from the interval <- 50 °C; +50 °C> in steps of 5 °C)
 * in degrees Celsius, Fahrenheit and Kelvin.
 **/

int main()
{
    int i;
    
    for(i = -50; i < 51; i = i + 5){

        printf("%3i °C %4.0f °F %7.2f °K\n", i, 1.8 * i + 32, i + 273.15);

    }

    return 0;
}