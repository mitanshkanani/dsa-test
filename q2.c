#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i,n,j,k;
    int a[n];
    int temp;
    printf("enter the number of elements you want to enter:");
    scanf("%d",&n);
    printf("Just enter the data 2 times sorry for this\n");
    for (i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&a[i]);
    }

    printf("The array entered by user is:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n-i;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array is:");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}