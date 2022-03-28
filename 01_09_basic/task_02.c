/*  
    #02
    Display on the monitor the number
    of banknotes and coins corresponding
    to the financial amount (CZK)
    given by the user. 
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int amount;  // Given amount.
    int ft, tt, ot, fh, th, oh;  // Banknotes.
    int fifty, twenty, ten, five, two, one;  // Coins.


    printf("Insert the financial amount.\n");
    scanf("%i", &amount);

    ft = amount / 5000;
    amount = amount - ft * 5000;

    tt = amount / 2000;
    amount = amount - tt * 2000;

    ot = amount / 1000;
    amount = amount - ot * 1000;

    fh = amount / 500;
    amount = amount - fh * 500;

    th = amount / 200;
    amount = amount - th * 200;

    oh = amount / 100;
    amount = amount - oh * 100;


    fifty = amount / 50;
    amount = amount - fifty * 50;

    twenty = amount / 20;
    amount = amount - twenty * 20;

    ten = amount / 10;
    amount = amount - ten * 10;

    five = amount / 5;
    amount = amount - five * 5;

    two = amount / 2;
    one = amount - fifty * 2;

    printf("The given amount can be divided into\n"
            "%i x 5000 CZK\n%i x 2000 CZK\n%i x 1000 CZK\n"
            "%i x 500 CZK\n%i x 200 CZK\n%i x 100 CZK\n\n"
            "%i x 50 CZK\n%i x 20 CZK\n%i x 10 CZK\n"
            "%i x 5 CZK\n%i x 2 CZK\n%i x 1CZK."
            ,ft, tt, ot, fh, th, oh, fifty, twenty, ten, five, two, one);

    return 0;

}