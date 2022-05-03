#include<stdio.h>

int main(){
    int a, b, maximum = __INT_MAX__;
    printf("Enter two numbers a and b: ");
    scanf("%d%d", &a, &b);
    if(a-b < 0) maximum = b;
    else if(a-b > 0) maximum = a;
    if(maximum != __INT_MAX__) printf("Maximum is %d", maximum);
    else printf("Both are same!");
    return 0;
}