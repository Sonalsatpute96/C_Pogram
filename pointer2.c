#include<stdio.h>

int amin()
{
    int age=22;
    int *ptr=&age;

    //printf("%p \n",&age);
    //printf("%p \n",ptr);
    //printf("%p \n",&ptr);

    printf("%d \n",age);
    printf("%d \n",*ptr);
    printf("%d \n",*(&age));
    return 0;
}