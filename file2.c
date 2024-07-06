#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    char ch;

    fscanf(fptr,"%c",&ch);
    printf("character1= %c \n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character2= %c \n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character3= %c \n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character4= %c \n",ch);

    fscanf(fptr,"%c",&ch);
    printf("character5= %c \n",ch);
 
    return 0;

}