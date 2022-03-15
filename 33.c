// Find biggest & Smallest number using pointer to array
#include<stdio.h>
int main()
{
    int *p,*q;
    int min,max;
    int array[5]={50,40,21,43,4};
    p=&array[0];
    q=&array[0];
    min=array[0];
    max=array[0];
    for (int i=0; i<5; i++) {
        if ((*p)<min)
        min=*p;
        if ((*p)>max)
        max=*p;
        p++;
        q++;
    }
    printf("%d is the smallest number\n",min);
    printf("%d is the biggest number\n",max);
    return 0;
}