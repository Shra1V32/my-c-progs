#include <stdio.h>
int main() {
   int i, j, rows,k;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
       for (k=0; k<=rows-i; k++) {
           printf(" ");
       }
      for (j = 1; j <= i; ++j) {
         printf("%d ",j);
      }
      printf("\n");
   }
   return 0;
}