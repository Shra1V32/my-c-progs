// Program by Shravan 2451-21-737-113
#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   int i;
   printf("Enter your string: ");
   gets(a);
   for (i=0; i<100; i++)
   if (a[i] == '\0')
   break;
   printf("The length of the given string is %d",i);
   return 0;
}