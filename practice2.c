#include<stdio.h>

int main(){
    int year;
    printf("Enter a year to check leap year or not:");
    scanf("%d", &year);
    if(year % 400 == 0) printf("Leap Year");
    else if( year % 4 == 0 && year % 100 != 0) printf("Leap Year");
    else printf("Not a leap year");
    return 0;
}