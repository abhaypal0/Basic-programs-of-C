#include<stdio.h>

int main()
{
    float h,b,area;
    printf("Enter the value of h = ");
    scanf("%f",&h);

    printf("Enter the value of b = ");
    scanf("%f",&b);
    area=(h*b)/2;
    printf("Area of Tringle = %f",area);
    return 0;
}