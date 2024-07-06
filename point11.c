#include<stdio.h>
void main()
{
    int adhar[5];
    int *ptr= &adhar[0];
    for(int i=0;i<=4;i++)
    {
        printf("\nEnter:");
        scanf("index=%d",&adhar[i]);
    }

     for(int i=0;i<5;i++)
    {
        printf("index=%d",adhar[i]);
    }
}
