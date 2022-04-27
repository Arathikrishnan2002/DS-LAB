#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node*next;
};
typedef struct Node node;

node*newnode();
void insert(int item);
int delete();
void display();

int item;
node *front=NULL,*rear=NULL,*p;

void main()
{
    int ch;
    do
    {
        printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
        printf("Enter yout choice :")
        scanf("%d",&n);
        switch(ch)
        {
            case 1:
                printf("Enter the element to be inserted");
                scanf("%d",&item);
                insert(int item);
                printf("Item inserted..");
                break;
            case 2:
                item = delete();
                if(item!=-1)
                    printf("The item deleted is %d",item);
                printf("the item is deleted...");
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting");
            default:
                printf("Invalid choice");
        }
    }while(ch!=4);
}
node*newnode()
{
    p= (node*)malloc(sizeof(node));
    return p;
}
void insert(int item)
{
    p = newnode();
    if(p==NULL)
    {
        printf("Insufficient memory");
    }
    else
    {
        p->info = item;
        if(front==NULL)
            front = rear=p;
        else
            rear->next =p;
            p = rear;
    }
}
int delete()
{
    if(front==NULL)
    {
        printf("Queue is empty");
        return -1;
    }
    else
    {
        item = front->info;
        p = front;
        if(front==rear)
            front = rear=NULL;
        else
            front = front->next;
        free(p);
        
    }
}
void display()
{
    node*curr=front;
    while(curr!=NULL)
    {
        printf("%d",curr->info);
        curr=curr->next;
    }
}

