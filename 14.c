// Linear Search
#include<stdio.h>
int main()
{
    int array[20],i,n,search,x;
    printf("Enter your number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the numbers in the array:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d",&search);
    // Linear Search
    for (i=0; i<n; i++)
    {
        if (search == array[i])
        {
        x=1;
        break;
        }
        else
        continue;
    }
    if (x==1)
    {
        printf("Value found for %d:\n It is element number %d in the array.",search,i+1);
    }
    else
    {
        printf("Wrong number selected.");
    }
    return 0;
}