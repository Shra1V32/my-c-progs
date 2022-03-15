#include<stdio.h>
int gcd(int n1,int n2);
int gcd(int n1,int n2)
{
    if (n2!=0)
    return gcd(n2,n1%n2);
    else
    return n1;
}
int main()
{
    int gcd(int a,int b);
    int x,y;
    printf("Enter the two numbers: ");
    scanf(" %d%d",&x,&y);
    printf("The GCD of the two numbers is: %d",gcd(x,y));
    return 0;
}