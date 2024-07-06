#include<stdio.h>
int main()
{
    int flag=0;
    int a[5]={1,2,3,4,5};
    for(int i=4;i>=0;i--)
    {
        printf("a[%d]=%d \t",i,a[i]);
    }

    int x;
    printf("\n lets find the number in an array");
    printf("\n Enter the no which you want to search from an array =\n");
    scanf("%d",&x);
    for(int i=0;i<5;i++)
    {
        if(x==a[i])
        {
            printf("No is present \n");
            flag=0;
            break;
        }
        else
        {
             flag=1;
        }
    }
  
        if(flag==1)
        {
            printf("No is not present \n");
    
        }
    
   

    return 0;
}