#include <stdio.h>
void heapsort(int [],int);
void heapify(int [],int,int);

void main()
{
    int n,a[100],i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    heapsort(a,n);
    
     printf("Sorted array in ascending order is");
     for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    
}
void heapsort(int a[00],int n)
{
    int i,temp;
    for(i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
    for(i=n-1;i>=0;i--)
    {
        temp =a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a,i,0);
    }
}
void heapify(int a[100],int n,int i)
{
    int largest = i;
    int lc = 2*i+1;
    int rc = 2*i+2;
    
    if(lc<n && a[lc]>a[largest])
       largest = lc;
       
    if(rc<n && a[rc]>a[largest])
       largest = rc;
       
    if(largest !=i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
    
    heapify(a,n,largest);
    }
}


