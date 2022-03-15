#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float r1,r2;
    printf("Enter the a value in the equation: ");
    scanf("%d",&a);
    printf("Enter the b value in the equation: ");
    scanf("%d",&b);
    printf("Enter the c value in the equation: ");
    scanf("%d",&c);
    if (b*b-4*a*c < 0)
    printf("The roots are imaginary, Not possible");
    else if (b*b-4*a*c == 0)
    {
    printf("The roots are real and equal, roots of the equation is: ");
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    printf("%f",r1);
    }
    else if (b*b-4*a*c > 0 )
    {
    printf("The roots of the equation are real: ");
    r1=(-b+sqrt(b*b-4*a*c))/2*a;
    r2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("%f,%f",r1,r2);
    }
    else
    {
        printf("Something went wrong.");
    }
}