#include<stdio.h>
#include<string.h>
int convert(char string[20]);
int convert(char string[20])
{
    int i;
    for (i=0; i<strlen(string); i++)
    {
        if (string[i]!=' ')
        {
            printf(" ");
            continue;
        }
        if (string[i] < 90)
        {
            printf("%c",string[i]);
            continue;
        }
        printf("%c",string[i]);
    }
    return 0;
}
int main()
{
    int convert(char string[20]);
    char string[20];
    printf("Enter your string: ");
    scanf("%s",string[20]);
    convert(string[20]);
    return 0;
}