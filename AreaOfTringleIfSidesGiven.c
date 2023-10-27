#include<stdio.h>
#include<math.h>
//Area of Tringle When sides are given
int main() 
{
    float a,b,c,s,area;
    printf("Enter the value of a = ");
    scanf("%f",&a);

    printf("Enter the value of b = ");
    scanf("%f",&b);

    printf("Enter the value of c = ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Tringle = %f",area);
    return 0;
    }