#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the no. till u want a natural no:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%d \t",i);
        sum=sum+i;
    }
    printf("\n Sum=%d",sum);

    printf("\n Reverse order of numbers: \n");

    for(int i=n; i>=1 ;i--)
    {
        printf("%d \t",i);
    }
    return 0;


}