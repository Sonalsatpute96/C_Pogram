#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int i=1;i<=5;i++)
        {
            for(int i=1;i<=5;i++)
            {
                for(int i=1;i<=5;i++)
                {
                    printf("*");
                }
                printf("\t");
            }
            printf("\n");
        }
        printf("\n");
    }
}