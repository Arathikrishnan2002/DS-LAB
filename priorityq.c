#include <stdio.h>
#define size 50

void insertq();
void deleteq();
void displayq();
struct queue
{
    int priority;
    int item;
}q[10];

int front =-1;
int rear = -1;

void main()
{
    int ch;
    do
    {
        printf("Enter your choice");
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
             {
                insertq();
                break;
             }
            case 2:
            {
                deleteq();
                break;
            }
            case 3:
            {
                 displayq();
                break;
            }
            case 4:
                break;
            default:
                printf("Invalid choice");
        }
    }while(ch!=4);
}
void insertq()
{
    int data,pri;
    if(rear==size-1)
    {
        printf("Queue is full");
    }
    else
    {
        if(front ==-1 && rear==-1)
        {
            front = rear=0;
            printf("Enter the priority");
            scanf("%d",&pri);
            printf("Enter the elemnet");
            scanf("%d",&data);
            q[rear].priority = pri;
            printf("%d priority is inserted",pri);
            q[rear].item = data;
            printf("%d item is inserted",data);
        }
        else
        {
            printf("Enter the priority");
            scanf("%d",&pri);
            printf("Enter the elemnet");
            scanf("%d",&data);
            rear = rear +1;
            q[rear].priority = pri;
            printf("%d priority is inserted",pri);
            q[rear].item = data;
            printf("%d item is inserted",data);
        }
    }
}
void deleteq()
{
    int i,j;
    struct queue temp,item;
    for(i=front;i<=rear;i++)
    {
        for(j=i+1;j<=rear;j++)
        {
        if(q[i].priority>q[j].priority)
        {
            temp = q[i];
            q[i] = q[j];
            q[j] = temp;
        }
        }
    }
    printf("Sorted elemnts are: ");
    for(i=front;i<=rear;i++)
    {
        printf("%d-%d\t",q[i].priority,q[i].item);
    }
    
    if(front==-1||front>rear)
    {
        printf("Queeue is empty");
    }
    else
    {
        item = q[front];
        if(front == rear)
            front = rear =-1;
        else
            front = front+1;
    }
}
void displayq()
{
    int i;
    if(front ==-1)
        printf("Queue is empty");
    else
        printf("Sorted elemnts are: ");
        for(i=front;i<=rear;i++)
        {
         printf("%d-%d\t",q[i].priority,q[i].item);
        }
}



