#include<stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("Enter th no n:till what u calculate addition");
    scanf("%d",&n);
    sum(n);
    printf("Sum=%d",sum(n));
    return 0;
}

int sum(int n)
{
    int sumNM1,sumN;
    if(n==1)
    return 1;
    else
    {
        sumNM1=sum(n-1);
    }
        sumN=sumNM1+n;
    
    return sumN;
}