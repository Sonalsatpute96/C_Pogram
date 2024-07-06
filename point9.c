#include<stdio.h>
int doWork(int *a,int *b,int *sum,int *mult);
int main()
{ 
    int a=5;
    int b=10;
    int sum,mult;
    doWork(&a,&b,&sum,&mult);
    printf("\nSum=%d",sum);
     printf("\nMultiplication=%d",mult);

    return 0;
}

int doWork(int *a,int *b,int *sum,int *mult)
{
    *sum=*a+*b;
    printf("\nSum=%d",*sum);
    *mult=(*a)*(*b);
    printf("\nMultiplication=%d",*mult);
}
