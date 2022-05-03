#include<stdio.h>

int main(){
    float radius, diameter, circumference, area;
    const float pi = 3.141;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    diameter = 2*radius;
    circumference = 2*pi*radius;
    area = pi*radius*radius;
    printf("Diameter: %.1f, Circumference: %f, Area: %f", diameter, circumference, area);
    return 0;
}