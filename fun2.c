#include<stdio.h>
void namste();
void bonjour();

 void main()
 {
    char ch;
    printf("Enter the character:(i/f) \n");
    scanf("%c",&ch);

    if(ch=='i')
    {
        namste();
    }
    else if(ch=='b')
    {
        bonjour();
    }else
    {
        printf("Wrong character enterd");
    }

 }

 void namste()
 {
    printf("Nmaste\n");
 }

 void bonjour()
 {
    printf("Bonjour \n");
 }