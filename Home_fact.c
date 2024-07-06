#include<stdio.h>
int main()
{
    printf("1.fibonacci series \n");
    printf("2.factorial \n");
    
    int ch;
    while (ch!=0)
    {
    printf("Enter your choice\n");
    scanf("%d",&ch);
   
        switch (ch)
        {
        case 1:
        {
            int n;
            printf("Enter n value till u want fibbonacci series\n");
            scanf("%d",&n);
            int n1=0,n2=1,n3;
            printf("%d\t%d\t",n1,n2);
            for (int i = 0; i <=n; i++)
            {
              n3=n1+n2;
              printf("%d\t",n3);
              n1=n2; 
              
              n2=n3;
            }
            break;
            
        }   
        case 2:
        {
            int x;
        printf("Enter the no of which you want to find the factorial \n");
        scanf("%d",&x);
        int fact=1;
        for(int i=1;i<=x;i++)
        {
            fact=fact*i;
        }
        printf("Factorial=%d \n",fact);
        break;
        }
        
        }
    }
    return 0;
}