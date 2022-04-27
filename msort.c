#include <stdio.h>

void mergesort(int [],int,int);
void merge(int [],int,int,int);

void main()
{
    int n,a[100],i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
     mergesort(a,0,n-1);
     
    printf("Sorted array is ");
      for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    
   
}  
void mergesort(int a[100],int lb,int ub)
{
    if(lb<ub)
    {
       int mid = (lb+ub)/2;
       mergesort(a,lb,mid);
       mergesort(a,mid+1,ub);
       merge(a,lb,mid,ub);
    }
}
void merge(int a[100],int lb,int mid,int ub)
{
    int b[100],k,i,j;
     k= lb;
     i= lb;
     j= mid+1;
    
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
        {
         b[k]=a[i];
            k++;
            i++;
        }
    while(j<=ub)
         {
             b[k]=a[j];
            k++;
            j++;
         }
    for(k=lb;k<=ub;k++)
         {
             a[k]=b[k];
         }
}

