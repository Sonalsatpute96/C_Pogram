#include<stdio.h>
int main()
{
    printf("Menu Driven Program For Double Pointer\n");
    int a=5;
    int b=10;
    int *ptr=&a;
    int *qtr=&b;
    int **pptr=&ptr;
    int **qqtr=&qtr;
    int ch;
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("\n Addition with double Pointer=%d",**pptr+**qqtr);
        break;

        case 2:printf("\n Subtraction with the double pointer=%d",**pptr-**qqtr);
        break;

        case 3:printf("\n Division with the double pointer=%d",**pptr/ **qqtr);
        break;

         case 4:printf("\n Multiplication with the double pointer=%d",(**pptr)*(**qqtr));
        break;

        default:printf("\n End of main function");
        break;
    }
}