#include<stdio.h>

void main()
{
    int age=22;
    int *ptr=&age;
    int _age=*ptr;

    printf("%d \n",_age);
    printf("%d",*ptr);
}
