#include<stdio.h>
int main()
{
    FILE *fp;
    int i;
    char filename[20],string,k;
    printf("Enter your file name: ");
    gets(filename);
    fp=fopen(filename,"w");
    puts("Enter the data to write to the file: ");
    /*
    scanf(" %[^\n]s",string);
    fprintf(fp,"%s",string);
    fclose(fp);
    */
   while((k=getchar())!=EOF) {
       putc(k,fp);
   }
   fclose(fp);
    // Show the data from the file
    fp=fopen(filename,"r");
    while ((k=getc(fp))!=EOF)
    {
        printf("%c",k);
    }
    fclose(fp);
}