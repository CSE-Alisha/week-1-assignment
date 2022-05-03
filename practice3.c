#include <stdio.h>

int main(){
    int number;
    printf("Enter a number to check:");
    scanf("%d", &number);
    switch (number < 0){
    case 1: printf("Number is negative");
        break;
    case 0:
        switch (number > 0){
        case 1: printf("Number is positive");
            break;
        case 0: printf("Number is zero");
            break;
        }
        break;
    }
    return 0;
}