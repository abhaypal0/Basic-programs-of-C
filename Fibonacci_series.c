#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a=0,b=1,c,N;
    printf("Enter the value of N = ");
    scanf("%d",&N);
    printf("Fabonaccie Series : ");
    printf("%d,",a);
    printf("%d,",b);
    for(i=3;i<=N;i++)
    {
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
    getch();
}
