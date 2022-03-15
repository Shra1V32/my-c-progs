#include<stdio.h>
void factorial(int *number);
void factorial(int *number)
{
    int factorial=1,i;
    for (i=1; i<=(*number); ++i)
    {
        factorial=factorial*i;
    }
    (*number)=factorial;
}
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    factorial(&num);
    printf("Factorial of the number: %d",num);
}