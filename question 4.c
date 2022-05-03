#include<stdio.h>

int main(){
    float a, b, result;
    int operator;
    printf("Enter two numbers a and b:");
    scanf("%f%f", &a, &b);
    printf("Choose an operator:\n1. +\n2. -\n3. *\n4. /\n");
    scanf("%d", &operator);
    switch (operator)
    {
    case 1: result = a + b;
        break;
    case 2: result = a - b;
        break;
    case 3: result = a * b;
        break;
    case 4: result = a / b;
        break;
    
    default: result = __INT_MAX__;
        break;
    }
    if(result != __INT_MAX__) printf("Result is : %.1f", result);
    else printf("Some error happened!");
    return 0;
}