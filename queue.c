#include <stdio.h>
#include <stdlib.h>
#define Max 10

int q[Max], front = 0, rear = 0;

void creat();
void travel();
void insert();
void del();

void main()
{
    creat();
    travel();
    insert();
    del();
    travel();
    getch();
}

void creat()
{
    char ch;
    front = 1;
    do
    {
        rear++;
        printf("Enter an element: ");
        scanf("%d", &q[rear]);
        printf("Press Y/N: ");
        ch = getch();
    } while (ch == 'Y' || ch == 'y');
}

void travel()
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}

void insert()
{
    int m;
    if (rear == Max - 1)
    {
        printf("Overflow\n");
        return;
    }
    printf("Enter new element: ");
    scanf("%d", &m);
    rear++;
    q[rear] = m;
}

void del()
{
    if (front == 0)
    {
        printf("Underflow\n");
        return;
    }
    if (front == rear)
    {
        q[front] = 10;
        front = rear = 0;
    }
    else
    {
        q[front] = 10;
        front++;
    }
}
