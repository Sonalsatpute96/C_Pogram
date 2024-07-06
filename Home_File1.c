#include<stdio.h>
int main()
{
    FILE *file=fopen("Hello.txt","w");
    if(file!=0)
    {
        int a,b;
        printf("File is opened\n ");
        fprintf(file,"Hello World");
        printf("\n Enter the value of a and b\n");
        scanf("%d %d",&a,&b);
        fprintf(file,"The addition of %d and %d is %d",a,b,a+b);
    }
    else
    {
        printf("\n Sorry,file can not be open.");
    }
    fclose(file);
    printf("\n File has been closed");

    return 0;
}