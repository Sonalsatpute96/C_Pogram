#include<stdio.h>
int square(int *n);
int main()
{
    int n=4;
    square(&n);
    printf("\n Value of n=%d",n);
    return 0;
}

int square(int *n)
{
    *n=(*n)*(*n);
    printf("\n Value of n=%d",*n);
}