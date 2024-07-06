#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="sonal";
    char str2[]="bendhale";

    int l=strlen(str1);
    printf("Length of string is %d",l);
    strcpy(str2,str1);
    printf("\n %s",str2);

    
    int i=strcmp(str1,str2);
    if(i==0)
    {
        printf("\n Strings are same");
    }
    else
    {
        printf("\n strings are diiferent");
    }

    strcat(str1,str2);
    printf("\n %s",str1);

    return 0;
}