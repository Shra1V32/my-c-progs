#include<stdlib.h>
#include<stdio.h>
int main(){
    int *ptr,i;
    printf("size of ptr before malloc call is: %d\n",sizeof(ptr));
    // After malloc
    ptr=(int *)malloc(10*sizeof(int));
    for (i=0; i<10; i++) {
    ptr[i]=i*(i+3);
    }
    for (i=0; i<10; i++)
    {
        printf("%d\n",ptr[i]);
    }
}
    