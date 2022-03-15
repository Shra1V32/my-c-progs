#include<stdio.h>
#include<math.h>
int main()
{
    // Decimal to binary
    int dec,bin=0,i=0,rem;
    printf("Enter the decimal number: ");
    scanf("%d",&dec);
    while (dec>0)
    {
        rem=dec%2;
        bin=bin+rem*pow(10,i);
        dec=dec/2;
        i++;
    }
    printf("The binary number is: %d",bin);

}