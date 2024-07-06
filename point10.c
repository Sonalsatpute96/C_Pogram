#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    int _age=23;
    int *_ptr=&_age;

    printf("Difference %u",ptr-_ptr);
    age++;
    printf("\n Comparison %u",*(ptr)==*(_ptr));
    return 0;
}