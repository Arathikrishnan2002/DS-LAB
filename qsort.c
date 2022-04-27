#include <stdio.h>
void quicksort(int[],int ,int);

void main()
{
    int n,a[100],i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    
     printf("Sorted array in ascending order is");
     for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    
} 
void quicksort(int a[100],int lb,int ub)
{
    int i,j,pivot,temp;
    pivot = lb;
    i = lb;
    j = ub;
    if(lb<ub)
    {
      while(i<j)
      {
          while(a[i]<=a[pivot])
              i++;
          while(a[j]>a[pivot])
              j--;
          if(i<j)
          {
              temp =a[i];
              a[i] = a[j];
              a[j] = temp;
          }
      }
      temp = a[pivot];
      a[pivot] = a[j];
      a[j] = temp;
      
      quicksort(a,lb,j-1);
      quicksort(a,j+1,ub);
    }
}
