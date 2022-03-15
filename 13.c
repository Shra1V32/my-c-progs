#include<stdio.h>
int main()
{
    int array[20],n,i,sum;
    printf("Enter your number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    // Finding sum of all the elements in the array
    for (i=0; i<n; i++)
    {
        sum+=array[i];
    }
    printf("Sum of the elements in the array is: %d",sum);

}