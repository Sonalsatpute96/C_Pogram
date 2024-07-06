#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","a");

    char ch;
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'R');
    fprintf(fptr,"%c",'J');
    fprintf(fptr,"%c",'U');
    fprintf(fptr,"%c",'N');
    fclose(fptr);

    return 0;
}