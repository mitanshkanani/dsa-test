#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 10
char stack[max];
int top=-1;

void push(char stack[],int x)
{
    if (top==max-1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }  
}

char pop(char stack[])
{
    int x;
    if (top==-1)
    {
        printf("stack empty");
    }
    else
    {
        x=stack[top];
        top--;
    }
   return x; 
}

int main()
{
    return 0;
}