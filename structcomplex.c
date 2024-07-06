#include<stdio.h>
#include<string.h>

struct complexNo
{
    int real;
    int imaginary;
};

int main()
{
    struct complexNo no1={5,10};
    struct complexNo *ptr=&no1;
    printf("Real part= %d \n",ptr->real);
    printf("imaginary part= %d \n",ptr->imaginary);
    return 0;
}