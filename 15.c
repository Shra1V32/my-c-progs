#include<stdio.h>
int main()
{
    int array[20],n,search,low,high,mid,i=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter your numbers in the array (Enter in ASCENDING ORDER ONLY):\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    // Taking number from the user to search using binary search method
    printf("Enter your number to search: ");
    scanf("%d",&search);
    // Implement Binary Search
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (array[mid]>search)
        {
            high=mid-1;
        }
        else if (array[mid]<search)
        {
            low=mid+1;
        }
        else
        break;
    }
    if (array[mid]==search)
        {
            printf("Search data found:\nIt is element number %d",mid+1);
        }
        else
        {
            printf("Invalid Selection.");
        }
    
}
