#include<stdio.h>
int main()
{
    int n=5;
    int fact=1;
    int i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    printf("%d",fact);
    return 0;
}