#include<stdio.h>
int main()
{
    int option,n1,n2;
    printf("Enter your two numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Select which operation you would like to perform: ");
    scanf("%d",&option);
    switch (option)
    {
    case 1 :
        printf("Addition: %d",n1+n2);
        break;
    case 2 :
        printf("Subtraction: %d",n1-n2);
        break;
    case 3 :
        printf("Multiplication: %d",n1*n2);
        break;
    case 4 :
        printf("Division: %d",n1/n2);
        break;
    default:
        printf("Invalid Option chosen, Exiting...");
        break;
    }
    return 0;
}