#include<stdio.h>

int sum(int a,int b);
int main()
{
    int a,b,s;
    printf("Enter the value of a and b:");
    scanf("%d ",&a);
    scanf("%d",&b);
    s=sum(a,b);
    printf("\nSum is %d ",s);
    return 0;
}

int sum(int a,int b)
{
    return (a+b);
}