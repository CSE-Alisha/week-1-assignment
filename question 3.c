#include <stdio.h>

int main(){
    int number;
    printf("Enter a number to check:");
    scanf("%d", &number);
    switch (number%2)
    {
    case 0: printf("Number is even!");
        break;
    case 1: printf("Number is odd!");
        break;
    default: printf("Invalid operand");
        break;
    }
    return 0;
}