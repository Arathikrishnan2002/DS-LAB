#include <stdio.h>

void main()
{
    int n,a[100],i,temp,j,min;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<n-1;i++)
    {
      min =i;
      for(j=i+1;j<n;j++)
      {
          if(a[j]<a[min])
             min = j;
      }
      temp = a[min];
      a[min] = a[i];
      a[i] = temp;
    } 
    printf("Sorted array in ascending order is");
     for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}


