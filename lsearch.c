#include <stdio.h>

int lsearch(int[],int,int);
int i;

void main()
{
    int n,key,flag=0,a[100];
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array eleemnts");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be serached");
    scanf("%d",&key);
    
    flag = lsearch(a,n,key);
    if(flag !=0)
        printf("Element %d is present at position %d ",key,flag);
    else
        printf("elemen is not found ");
}
int lsearch(int a[],int n,int key)
{
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
            return(i+1);
    }
    return 0;
}

