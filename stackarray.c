#include <stdio.h>
#define size 50

int isfull();
int isempty();
void push(int);
int pop();
int peek();
void display();

int s[size],top=0,item;

void main()
{
    int ch;
    do
    {
        printf("Enter your choice : 1.push\n2.pop\n3.peek\n4.display\n5.exit ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                   printf("Enter the item to e pushed ");
                   scanf("%d",&item);
                   push(item);
                   break;
            case 2:
                    item = pop();
                    if(item !=-1)
                       printf("Item retrived is %d",item);
                    break;
            case 3:
                    item = peek();
                    if(item !=-1)
                        printf("Item is %d",item);
                    break;
            case 4:
                    display();
                    break;
            case 5:
                    break;
            default:
                    printf("Invalid choice");
                    
        }
    }while(ch!=5);
}
int isfull()
{
    if(top==size)
        return 1;
    else
        return 0;
}
int isempty()
{
    if(top==0)
        return -1;
    else
        return 0;
}
void push(int item)
{
    if(isfull())
        printf("Stack is full");
    else
        s[top] = item;
        top = top+1;
}
int pop()
{
    if(isempty())
    {
        printf("Stack is empty");
              return -1;
    }
        else
             top = top-1;
             item = s[top];
             return item;
    
}
int peek()
{
    if(isempty())
    {
        printf("Stack is empty");
              return -1;
    }
        else
             item = s[top-1];
             return item;
}

void display()
{
    int i;
    printf("element in the stack are ");
       for(i=0;i<top;i++)
           {
               printf("%d",s[i]);
           }
}

