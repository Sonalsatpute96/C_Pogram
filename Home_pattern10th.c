#include<stdio.h>
int main()
{
    int a=65;
    for(int i=1;i<=5;i++)
    {
        
        for(int j=1;j<=5;j++)
        {
            if(i<=j)
            {
          
            printf("%c",a);
    
            }
        }
        printf("\n");
        a++;
        
    }
}