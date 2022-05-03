#include<stdio.h>

int main(){
    int number;
    printf("Enter a number to check wheather +ve, -ve or zero:");
    scanf("%d", &number);
    if(number < 0) printf("Number is negative.");
    else if(number) printf("Number is positive.");
    else printf("Number is zero.");
    return 0;
}