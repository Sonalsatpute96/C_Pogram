#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6};
    int n=6;
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d \t",b[i]);
    }
}