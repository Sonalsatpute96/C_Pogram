#include<stdio.h>
#define LINE printf("____________________________________________________________\n");
#define ADD(a,b) printf("%d",a+b);

int main()
{
    printf("Hello\n");
    LINE;
    ADD(10,10);
    return 0;
}