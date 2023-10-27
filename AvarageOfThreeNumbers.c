#include<stdio.h>

float main() {
    float a,b,c,avg;
    printf("Enter the value of a = ");
    scanf("%f",&a);

    printf("Enter the value of b = ");
    scanf("%f",&b);

    printf("Enter the value of c = ");
    scanf("%f",&c);

    avg=(a+b+c)/3;
    printf("avg = %f",avg);
    return 0;
}