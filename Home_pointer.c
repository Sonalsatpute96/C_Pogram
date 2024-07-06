#include<stdio.h>
int main()
{
    int a;
    int b;
    int ch;
    int *ptr=&a;
    int *qtr=&b;
    int **dptr=&ptr;
    int **dqtr=&qtr;

printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
do
{
    printf("-------------------------Menu---------------------------------------\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Divide\n");

    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("The addition of a and b is %d\n", **dptr + **dqtr);
            break;
        }
         case 2:
        {
            printf("The Substraction of a and b is %d\n", **dptr - **dqtr);
            break;
        }
         case 3:
        {
            printf("The Multiplication of a and b is %d\n", **dptr * **dqtr);
            break;
        }
         case 4:
        {
            printf("The Divide of a and b is %d\n", **dptr / **dqtr);
            break;
        }
    }
}while (ch!=0);
return 0;
}
