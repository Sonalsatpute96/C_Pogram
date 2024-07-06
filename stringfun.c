#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]="sonal";
    char str2[]="Bendhale";
    int length=strlen(str2);
    printf("Length of string 1 is %d \n",length);
    strcpy(str1,str2);
    printf("strcpy works:\n");
    puts(str1);
    printf("Concatenation of two string \n");
    strcat(str1,str2);
    puts(str1);
    printf("Comparision of string %d",strcmp(str1,str2));

    return 0;
}