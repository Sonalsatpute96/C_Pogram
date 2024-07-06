#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("number.txt","r");
    int a,b;

    fscanf(fptr,"%d \n",&a);
    fscanf(fptr,"%d \n",&b);
  //  printf("%d %d",a,b);

    fclose(fptr);

    fptr=fopen("number.txt","w");

    //int c=a+b;
    //printf("%d",c);

    fprintf(fptr,"Sum=%d \n",a+b);

    fclose(fptr);

    return 0;
}