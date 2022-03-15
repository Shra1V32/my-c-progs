#include<stdio.h>
int main()
{
    int n,i,j,t,min,a[20];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter your elements: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements before sorting:\n");
    for (i=0; i<n; i++)
    printf("%d ",a[i]);
    // Sorting starts from here
    for (i=0; i<n-1; i++)
    {
        min=i;
        for (j=i+1; j<n; j++)
        {
            if (a[j]<a[min])
            min=j;
        }
        if (min!=i)
        {
            t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
    }
    printf("Elements after sorting are:\n");
        for (i=0; i<n; i++)
        printf("%d ",a[i]);
        return 0;
}