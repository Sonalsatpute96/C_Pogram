#include<stdio.h>
int main()
{
    char str1[]={'a','b','c','d','\0'};
    char str[]="ramayan";
    printf("To uppercase= \n");
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            printf("%c",str[i]-32);
        
        }
        else
        {
            printf("%c",str[i]);
        }
    }

    printf("\n To lowercase= \n");
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            printf("%c",str[i]+32);
        
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    return 0;

}