#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    char ch;
    ch=fgetc(fptr);
    while ((ch!=EOF))
    {
        printf("%c \n",ch);
        ch=fgetc(fptr);
    }

    printf("End");
    return 0;
    
}