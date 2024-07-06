#include<stdio.h>
int printStr(char arr[]);
int main()
{
    char firstName[]="Sonal";
    char lastName[]="Bendhale";
    printStr(firstName);
    printStr(lastName);
    return 0;
}
int printStr(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\t");
}