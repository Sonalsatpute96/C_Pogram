#include<stdio.h>
int main()
{
    int a[2][2]={{1,1},{1,1}};
    int b[2][2]={{1,1},{1,1}};
    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
    printf("The addition of matrix is=\n");
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("c[%d][%d]=%d \t",i,j,*(*(c+i)+j));
        }
        printf("\n");
    }

   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        for(int k=0;k<2;k++)
        {
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            
        }
    }
   }
   printf("The multiplicatin= \n");

    for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        for(int k=0;k<2;k++)
        {
           printf("c[%d][%d]=%d \t",i,j,c[i][j]);
            
        }
        printf("\n");
    }
   }
   return 0;

}