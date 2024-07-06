#include<stdio.h>
int main()
{
    int n;
    printf("Enter no:");
    scanf("%d",&n);

    if (n>0)
    {
        printf("No is positive \n");
    if(n%2==0)
        {
        printf("No is even");
        }
        else
        {
        printf("odd no");
        }
    }
    else
    {
        printf("Negative no \n");
    }
        
            return 0;
}