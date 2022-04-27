#include <stdio.h>

typedef struct
{
    int coeff;
    int exp_x;
    int exp_y;
    int exp_z;
}terms;

void main()
{
    int n,i;
    printf("Enter the number of terms in the expression");
    scanf("%d",&n);
    
    terms poly[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter the coefficent of %d term",(i+1));
        scanf("%d",&poly[i].coeff);
        printf("Enter the exponent of x in term %d ",(i+1));
        scanf("%d",&poly[i].exp_x);
        printf("Enter the exponent of y in term %d ",(i+1));
        scanf("%d",&poly[i].exp_y);
        printf("Enter the exponent of z in term %d ",(i+1));
        scanf("%d",&poly[i].exp_z);
        
        printf("\n");
    }
    printf("The expression is :");
    for(i=0;i<n;i++)
    {
        printf("%dx^%dy^%dz^%d",poly[i].coeff,poly[i].exp_x,poly[i].exp_y,poly[i].exp_z);
        if(i<n-1)
            printf("+");
    }
}

