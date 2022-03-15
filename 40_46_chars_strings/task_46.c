/*  
    #46
    Write a Caesar Cipher program (shifting 
    by a certain number of characters of the alphabet).
    Display the input, encoded and decoded string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char string[10];
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    int shift, i, j, index;

    printf("Insert the string to be encoded:\n");
    scanf("%s", string);
    printf("\nInsert the shift (positive for right, negative\
    for left alphabetical shift).\n");
    scanf("%i", &shift);

    printf("Input string: %s\n", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        for(j = 0; j < 26; j++)
        {
            index = 0;

            if(string[i] == alphabet[j])
            {
                index = j;
                break;
            }

        }
        
        index = (index + shift) % 26;
        if(index < 0)
        {
            
            index = index + 26;
            
        }
        string[i] = alphabet[index];

    }

    printf("\nEncoded string: %s\n", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        index = 0;
        for(j = 0; j < 26; j++)
        {index = 0;

            if(string[i] == alphabet[j])
            {
                index = j;
                break;
            }

        }
        
        index = (index - shift) % 26;
        if(index < 0)
        {
            
            index = index + 26;
            
        }
        string[i] = alphabet[index];

    }

    printf("Decoded string: %s\n", string);
    
    return 0;

}