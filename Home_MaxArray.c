#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int max=a[0];
    for(int i=0;i<5;i++)
    {
    if(a[i]>max)
    {
        max=a[i];
    }
    }
    printf("\n Maximum element is %d",max);

    int min=a[0];
    for(int i=0;i<5;i++)
    {
    if(a[i]<min)
    {
        min=a[i];
    }
    }
    printf("\n Manimum element is %d",min);
    
    return 0;
}