#include<stdio.h>
void even(int n);
void odd(int n);
int main()
{
    printf("Print the even no till 10 \n");
    even(10);
    printf("Print the odd no till 10\n");
    odd(10);
    return 0;
}
void even(int n)
{
    if(n<=0)
    {
        return;
    }
    if(n%2==0)
        {
            printf("%d is even no\n",n);
        }
        even(n-1);
 
}

void odd(int n)
{
    if(n<=0)
    {
        return;
    }
    if(n%2!=0)
        {
            printf("%d is even no\n",n);
        }
        odd(n-1);

}