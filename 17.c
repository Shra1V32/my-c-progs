// Bubble sort
#include<stdio.h>
int main()
{
    int n,i,array[20],temp,j;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter your elements in the array:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    // Sorting out starts from here
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
        if (array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}