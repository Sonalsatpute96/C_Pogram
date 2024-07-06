#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");

    printf("Character=%c \n",fgetc(fptr));
    printf("Character=%c \n",fgetc(fptr));
    printf("Character=%c \n",fgetc(fptr));
    printf("Character=%c \n",fgetc(fptr));
    printf("Character=%c \n",fgetc(fptr));

    

    return 0;
}
