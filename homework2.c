#include<stdio.h>

int main()
{
    int i;
    printf("Enter choice:");
    scanf("%d",&i);
    printf("1.circle \n");
    printf("2.Rectangle \n");
    
    i=1;
    do
    {
        if(i==1)
        {
        float r=2.5;
        printf("Area of circle is %f",3.14*r*r);
        break;
        }
    
        if(i==2)
        {
        int a=10,b=20;
        printf("Area=%d",a*b);
        break;
        }
        i++;

    }while (i<=2);
    
    
    
    return 0;
}