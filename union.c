#include<stdio.h>
#include<string.h>
union employee
{
    char name[20];
    int salary;
    char designation[20];
};
int main()
{
    union employee s1[10];
    char *fgets(char *str, int size, FILE *stream);
    int n,i=0;
    char employee_designation[20],employee_name[20];
    printf("Enter the n value:");
    scanf("%d",&n);
    printf("Enter the details for respective employee:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter the data for Employee %d\n",i+1);
        printf("Name:\n");
        fgets(employee_name,20,stdin);
        printf("Salary:\n");
        scanf("%d",&s1[i].salary);
        printf("Designation:\n");
        gets(employee_designation);
        strcpy(s1[i].designation,employee_designation);
    }

}