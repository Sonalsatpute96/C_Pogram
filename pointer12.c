#include<stdio.h>
int main()
{
    int a=10,b=5,ch;
    int *ptr=&a;
    int *qtr=&b;
    do
    {
        printf("==============Menu===============\n");
        printf("1.Addition\n 2.Subtraction\n 3.multpilcation\n 4.Division");
        printf("\n Enter ur choice");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:printf("Addition is%d",*ptr+*qtr);
                break;

        case 2:printf("Subtraction is%d",*ptr-*qtr);
                break;

        case 3:printf("multiplication is%d",(*ptr)*(*qtr));
                break;

        case 4:printf("division is%d",(*ptr)/(*qtr));
                break;

        default:printf("Invlaid no.\n");
        }

    } while (ch!=0);
    

    return 0;
}