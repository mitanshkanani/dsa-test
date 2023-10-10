#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *create()
{
    node *head,*p;
    int i,n;
    head=NULL;
    printf("enter number of elements you ewant to enter:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        if (head==NULL)
        {
           p=head=(node*)malloc(sizeof(node));
        }
        else
        {
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
        }
        p->next=NULL;
        printf("Enter element no %d:",i+1);
        scanf("%d",&(p->data));
    }
    return head;
}

node *delete_at_end(node *head)
{
    node *ptr=head;
    node *ptr2;
    if (head==NULL)
    {
        printf("linked list does not exist");
        return NULL;
    }
    else
    {
        while (ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr2=ptr->next;
        printf("Deleted element is:%d\n",(ptr2->data));
        free(ptr2);
        ptr->next=NULL;
        return head;
    }
}

void display(node *head)
{
    node *ptr=head;
    while (ptr!=NULL)
    {
        printf("%d--->",(ptr->data));
        ptr=ptr->next;
    }
}
int main()
{
    int c;
    node *head;
    printf("\n1.create\n2.delete at end\n3.display\n4.exit\n");
    do
    {
        printf("enter choice:");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            head=create(); 
            break;
        case 2:
            head=delete_at_end(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            printf("exiting....");        
        default:
            printf("enter valid value");
            break;
        }
    } while (c!=4);
    
    return 0;
}