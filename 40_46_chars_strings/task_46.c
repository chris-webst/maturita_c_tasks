/**
 * #46
 * Write a Caesar Cipher program (shifting 
 * by a certain amount of characters of the alphabet).
 * Display the primary, encoded and decoded string.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void code(char string[], char alphabet[], int shift);


int main()
{

    char string[] = "thisiscaesarsmessage";
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    int shift;
  
    printf("Insert the shift (positive int for right, negative"
    " int for left alphabetical shift).\n");
    scanf("%i", &shift);
        
    shift = shift % 26;
    
    printf("Input string: %s\n", string);
    printf("\nEncoded");
    code(string, alphabet, shift);
    printf("\nDecoded");
    code(string, alphabet, - shift);

    return 0;

}

void code(char string[], char alphabet[], int shift){
    
    int i;
    int j;
    int index;
    
    for(i = 0; string[i] != '\0'; i++){
        
        for(j = 0; j < 26; j++){
            
            if(alphabet[j] == string[i]){
                
                index = j;
                
            }
            
        }
        
        string[i] = alphabet[((index + shift) % 26)];
        
    }
    
    printf(" string: %s\n", string);
    
}
