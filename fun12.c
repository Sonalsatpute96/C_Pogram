#include<stdio.h>
int fib(int n);

void main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    printf("%d",fib(n));
}

int fib(int n)
{
    int fibo,fibNM1,fibNM2;
    if(n==0)
    {
    return 0;
    }
    if(n==1)
    {
        return 1;
    }
    fibNM1=fib(n-1);
    fibNM2=fib(n-2);

    fibo=fibNM1+fibNM2;
    //printf("\n %d",fibo);
    return fibo;
}
