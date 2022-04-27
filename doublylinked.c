#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node*next;
    struct Node*prev;
    
};

typedef struct Node node;
int item1,item;
node *head=NULL,*tail=NULL,*p;

node*newnode();
void insertfirst(int item);
void insertbefore(int item1,int item);
void insertafter(int item1,int item);
void delete(int item);
void traverse_right();
void traverse_left();

void main()
{
    int ch;
    do
    {
    printf("\n1.Insertfirst \n2.Insertbefore \n3.Insertafter \n4.Delete \n5.Traverse to right \n6.Traverse to left \n7.Exit");
    
    printf("\nEnter your choice:");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
                printf("Enter item to be inserted at first: ");
                scanf("%d",&item);
                insertfirst(item);
                printf("\n");
                break;
                
            case 2:
                printf("Enter item to be inserted: ");
                scanf("%d",&item);
                printf("Enter before which item the new item is to be placed: ");
                scanf("%d",&item1);
                insertbefore(item1,item);
                printf("\n");
                break;
            
            case 3:
                printf("Enter item to be inserted: ");
                scanf("%d",&item);
                printf("Enter after which item the new item is to be placed: ");
                scanf("%d",&item1);
                insertafter(item1,item);
                printf("\n");
                break;
                
            case 4:
                printf("Enter item to be deleted: ");
                scanf("%d",&item);
                delete(item);
                printf("\n");
                break;
                
            case 5:
                traverse_right();
                printf("\n");
                break;
            
            case 6:
                traverse_left();
                printf("\n");
                break;
                
            case 7:
                printf("Exiting...");
                break;
            
            default:
                printf("Invalid choice");
                printf("\n");
        }
    }while(ch!=7);
}

node*newnode()
{
    p = (node*)malloc(sizeof(node));
    p->next=NULL;
    p->prev = NULL;
    return p;
}
void insertfirst(int item)
{
    p=newnode();
    p->info = item;
    p->prev = NULL;
    p->next = head;
    if(head ==NULL)
    {
        head=tail=p;
    }
    else
    {
        head->prev=p;
        head = p;
    }
}
void insertbefore(int item1,int item)
{
    node*curr;
    curr = head;
    while(curr!=NULL && curr->info!=item1)
    {
        
        curr = curr->next;
    }
    if(curr=NULL)
    {
        printf("No such node");
    }
    else
    {
        p = newnode();
        p->info = item;
        p->next = curr;
        p->prev = curr->prev;
        if(curr==head)
            head =p;
        else
           curr->prev->next=p;
        curr->prev=p;
    }
}
void insertafter(int item1,int item)
{
    node*curr;
    curr=head;
    while(curr!=NULL && curr->info!=item1)
        curr=curr->next;
    if(curr==NULL)
        printf("No such node");
    else
     {
        p=newnode();
        p->info=item;
        p->prev=curr;
        p->next=curr->next;
        if(curr==tail)
        {
            tail=p;
        }
        else
         curr->next->prev=p;
        curr->next = p;
     }
     
}
void delete(int item)
{
    node*curr;
    curr=head;
    while(curr!=NULL && curr->info!=item)
        curr=curr->next;
    if(curr==NULL)
        printf("No such node");
    else
    {
        if(curr==head)
        {
            head = curr->next;
        }
        else
        {
            curr->prev->next = curr->next;
        }
        if(curr==tail)
        {
            tail = curr->prev;
        }
        else
        {
            curr->next->prev=curr->prev;
        }
        free(curr);
    }
}
        
void traverse_right()
{
    node *curr;
    curr=head;
    printf("\nItem from left to right:\t");
    while(curr!=NULL)
    {
        printf("%d\t",curr->info);
        curr=curr->next;
    }
}

void traverse_left()
{
    node*curr;
    curr=tail;
    printf("\nItem from right to left:\t");
    while(curr!=NULL)
    {
        printf("%d\t",curr->info);
        curr=curr->prev;
    }
}
