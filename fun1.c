#include<stdio.h>
void hello();
void goodbye();
int main()
{
    hello();
    goodbye();
    return 0;
}

void hello()
{
    printf("Hello by function \n ");
}
void goodbye()
{
    printf("Good bye");
}