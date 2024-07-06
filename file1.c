#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("switch.txt","w");
    if(fptr==NULL)
    {
        printf("File doesn't exists:");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}