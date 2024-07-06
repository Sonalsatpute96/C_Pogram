#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no of which u want factorial:");
    scanf("%d",&n);

    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nFactorial=%d",fact);
}