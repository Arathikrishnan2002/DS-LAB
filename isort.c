#include <stdio.h>

void main()
{
    int n,a[100],i,temp,j;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
     {
         temp = a[i];
         j=i-1;
         while(j>=0 && a[j]>temp)
         {
             a[j+1] = a[j];
             j--;
         }
         a[j+1] = temp;
     }
       printf("Sorted array in ascending order is");
     for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}



