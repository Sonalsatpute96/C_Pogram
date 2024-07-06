#include<stdio.h>
int main()
{
    for(int i=1;i<=50;i++)
    {
        printf("%d \t",i);
    }
    int x;
    printf("\n Enter a no\n");
    scanf("%d",&x);
    if (x%3==0 && x%5==0)
    {
        printf("\n C program");
     
    }else if (x%5==0)
    {
        printf("\n program");
    }else  if(x%3==0)
    {
           printf("\n C");
    }else
    {printf("\n End of main");
    }
    
    
    return 0;
}