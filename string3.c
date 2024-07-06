#include<stdio.h>

int main()
{
    char name[]="Sonal";
    char _name[50];
    printf("%s\t",name);
    scanf("%s",_name);
    printf("%s \t",_name);
    char surN[50];
    fgets(surN,50,stdin);
    puts(surN);
    return 0;
}