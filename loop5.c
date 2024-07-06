#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of which table you want:\n");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("Table of % d=%d \n",n,(n*i));
    }
    return 0;
}