#include<stdio.h>
int main()
{
    
    for(int i=1;i<125;i++)
    {
        printf("%d=%c \t",i,i);
    }
    char str[]="Sonal";
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            printf("%c",str[i]);
        }
        else
        {
            printf("%c",str[i]-32);
        }
    }
    return 0;

}