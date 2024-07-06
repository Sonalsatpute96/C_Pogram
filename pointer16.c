#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter value of a and b=");
    scanf("%d %d",&a,&b);
    printf("\nValue of a and b before swapping=%d %d",a,b);
    swap(&a,&b);
    return 0;
 
}

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("\nValue of a & b after swapping:%d %d",*a,*b);
}