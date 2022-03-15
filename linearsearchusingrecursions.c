#include<stdio.h>
int search(int value,int pos[20],int number)
{
    int i,k;
    for (i=0; i<number; i++)
    {
        if (pos[i]==value)
        {
            k=1;
            break;
        }
        else
        continue;
    }
    if (k==1)
    printf("Element found at %d position",i+1);
    else
    printf("Element not found");
}
int main()
{
    int search(int value,int pos[20],int number);
    int i,array[20],n,key,k;
    printf("Enter your n value: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter your search integer value: ");
    scanf("%d",&key);
    search(key,array,n);
    return 0;
}