#include<stdio.h>
int factorial(int num)
{
    int factorial=1,i;
    for (i=1; i<=num; ++i)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int factorial(int num);
    int num;
    printf("Enter your number to find factorial: ");
    scanf("%d",&num);
    printf("Factorial of %d is: %d",num,factorial(num));
    return 0;
}