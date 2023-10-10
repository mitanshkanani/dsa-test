#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 10
int data[max];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if (front==(rear+1)%max)
    {
        printf("queue overflow");
    }
    else if (front==-1||rear==-1)
    {
        front=rear=0;
        data[rear]=x;
    }
     else
     {
        rear=(rear+1)%max;
        data[rear]=x;
     }    
}

int dequeue()
{
    int x;
    if (front==-1)
    {
        printf("queue underflow");
    }
    else
    {
        x=data[front];
        front=(front+1)%max;
    }
    if (front=(rear+1)%max)
    {
        front=rear=-1;
    }
    
   return x; 
}

void display()
{
    int i;
    for ( i = 0; i !=rear; i++)
    {
        printf("%d",data[i]);
    }
    printf("%d",data[rear]);
}

int main()
{
    int c,x;
    printf("\n1.push\n2.pop\n3.display\n4.exit");
    do
    {
       printf("enter choice:");
       scanf("%d",&c);
       switch (c)
       {
       case 1:
            printf("enter the elemnt to enter:");
            scanf("%d",&x);
            enqueue(x);
            break;
       case 2:
            printf("dequeed element is %d",dequeue());
            break;
        case 3:
            display();
            break;
        case 4:
            printf("exiting");
            break;
       default:
            printf("enter valid choice");
            break;
       }
    } while (c!=4);
    
    return 0;
}