#include<stdio.h>

void main()
{
    int age=22;
    int *ptr=&age;
    int _age=*ptr;

    printf("%u \n",_age);
    printf("%u \n",*ptr);
    printf("%u \n",*(&age));
    
}
