#include <stdio.h>
void bubblesort(int[],int);

void main()
{
    int n,a[100],i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    bubblesort(a,n);
    
    printf("Sorted elemnts in ascending is :  ");
    for(i=0;i<n;i++)
      printf("%d \n",a[i]);
}
void bubblesort(int a[] ,int n)
{
    int i,j,temp;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

