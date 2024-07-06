#include<stdio.h>
int main()
{
    int n=1;
    do{
    for(int i=1;i<=10;i++)
    {
        printf("%d \t",n*i);
    }
    printf("\n");
    n++;
    }while (n!=11);

    return 0;
}