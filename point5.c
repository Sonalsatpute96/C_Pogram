#include<stdio.h>
int main()
{
    int x;
    int *ptr;
    ptr=&x;
    *ptr=0;
    
    printf("%d \n",*ptr);
    printf("%d \n",x);

    *ptr=*ptr+5;
    printf("%d \n",*ptr);
    printf("%d \n",x);

    (*ptr)++;
    printf("%d \n",*ptr);
    printf("%d \n",x);

    (*ptr)--;
    printf("%d \n",*ptr);
    printf("%d \n",x);


    return 0;
}