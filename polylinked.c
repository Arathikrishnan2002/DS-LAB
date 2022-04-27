#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coeff;
    int expo;
    struct Node*next;
    
};
typedef struct Node node;


int main()
{
    node *head=NULL,*curr,*p;
    int terms,i;
    
    printf("Enter the numebr of terms in the polynomial : ");
    scanf("%d",&terms);
    printf("Enter the terms : ");
    for(i=0;i<terms;i++)
    {
        p = (node*)malloc(sizeof(node));
        p->next = NULL;
        printf("coefficeient : ");
        scanf("%d",&p->coeff);
        printf("Exponent : ");
        scanf("%d",&p->expo );
        if(head==NULL)
        {
            head =p;
            curr =p;
        }
        else
        {
            curr->next=p;
            curr=p;
        }
    }
    printf("The polynomial is : ");
    for(curr=head;curr!=NULL;curr=curr->next)
    {
        if(curr->expo==1)
        {
           printf("%dx",curr->coeff);
        }
        else if(curr->expo==0)
        {
            printf("%d",curr->coeff);
        }
        else
        {
            printf("%dx^%d",curr->coeff,curr->expo);
        }
    if(curr->next)
        {
            printf("+");
        }
    }
}
