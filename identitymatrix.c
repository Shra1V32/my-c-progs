// Check whether the given matrix is Identity Matrix or not
#include<stdio.h>
int main()
{
    int a[20][20],i,j,r,c,identity=1;
    printf("Enter your number of rows and columns in the matrix: ");
    scanf(" %d%d",&r,&c);
    printf("Enter the elements in the matrix: \n");
    for (i=0; i<r; i++)
    for (j=0; j<c; j++)
    scanf("%d",&a[i][j]);
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            if (i==j && a[i][j]!=1) {
            identity=0;
            break;
            }
            if (i!=j && a[i][j]!=0) {
            identity=0;
            break;
            }
        }
    }
    if (identity != 0)
    printf("Given matrix is an identity matrix");
    else
    printf("Given matrix is not an identity matrix");
    return 0;

}