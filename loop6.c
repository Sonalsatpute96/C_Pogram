#include<stdio.h>
int main()
{
    int n;

    int i=1;
    do
    {
    printf("Enter a no:");
    scanf("%d",&n);
   // printf("%d \t",n);
    if(n%2!=0)
    {
        break;
    }
    i++;
    }while (1);

    printf("Thank you");
    

    return 0;
}