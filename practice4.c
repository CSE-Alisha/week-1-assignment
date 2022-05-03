#include<stdio.h>

int main(){
    char character;
    printf("Enter a letter to check vowel or consonant:");
    scanf("%c", &character);
    if((character >= 65 && character <= 90) || (character >= 97 && character <= 122)){
        switch (character){
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A': 
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("Vowel"); break;
        default: printf("Consonant"); break;
        }
    }else printf("Invalid letter detected.");
    return 0;
}