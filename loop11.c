#include<stdio.h>
void main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);

    for(int i=10;i>=1;i--)
    {
        printf("%d \t",n*i);
    }
}