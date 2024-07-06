#include<stdio.h>

int swap(int *a,int *b);

int main()
{
    int a=5;
    int b=6;
    swap(&a,&b);
    printf("\n Value a=%d,b=%d",a,b);
    return 0;
}


int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n Values a=%d,b=%d",*a,*b);
}
