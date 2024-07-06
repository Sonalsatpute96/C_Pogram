#include<stdio.h>
int main()
{
    int a,b,ch;
    int *ptr=&a;
    int *qtr=&b;

   

    do{
        printf("Enter value of a and b");
        scanf("%d%d",&a,&b);
        printf("-------------------------Menu---------------------------------------\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Divide\n");
       
   
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
            
        case 1:
        {
            printf("the addition of a and b is %d\n",*ptr + *qtr);
            break;
        }
        case 2:
        {
            printf("the Substraction of a and b is %d \n",*ptr - *qtr);
            break;
        }
        case 3:
        {
            printf("the Multiplication of a and b is %d\n",*ptr * *qtr);
            break;
        }
        case 4:
        {
            printf("the Division of a and b is  %d\n",*ptr / *qtr);
            break;
        }
            
        
        default:
        printf("Invalid input");
            break; 
        }
    }while(ch!=0);
    printf("end of main");
}