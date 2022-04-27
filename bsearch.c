#include <stdio.h>

int bsearch(int [],int ,int);
int i;

void main()
{
     int n,key,flag,a[100];
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array eleemnts");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be serached");
    scanf("%d",&key);
    
    flag = bsearch(a,n,key);
    if(flag !=0)
        printf("Element %d is present at position %d ",key,flag);
    else
        printf("elemen is not found ");
}
int bsearch(int a[],int n,int key)
{
    int t=0,b=n-1,mid;
    while(t<=b)
    {
        mid = (t+b)/2;
        if(key==a[mid])
           return mid+1;
        else
           {
               if(key<a[mid])
                  b = mid-1;
               else
                  t = mid+1;
           }
    }
 return 0;
}

