#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter a no of which u want to find the factorial:");
    scanf("%d",&n);
    printf("\nFactorial of no is %d",fact(n));
    return 0;
}

int fact(int n)
{
    int factorial,factNM1;
    if(n==1)
    return 1;
    else
    factNM1=fact(n-1);
    factorial=factNM1*n;

    return factorial;
}