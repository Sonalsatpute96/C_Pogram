/*#include<stdio.h>
int main()
{
    int x=65;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%c",x);
                x++;
            }
        }
        printf("\n");
    }
}*/
#include<stdio.h>
int main()
{

printf("A \n");
printf("1 \n");
int a=66;
for(int i=3;i<=5;i++)
{
   for(int j=2;j<=5;j++)
      { 
         if(j<=i)
         {
         printf("%c",a);
         a++;
         }
      }
printf("\n");
}
return 0;
}
