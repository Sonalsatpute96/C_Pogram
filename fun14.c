#include<stdio.h>
void temp(float t);

void main()
{
    float t;
    printf("enter tempeature:");
    scanf("%f",&t);
    temp(t);

}

void temp(float t)
{
    if(t>30)
    {
        printf("Its hot \n");
    }else if(t<20)
    {
        printf("Its cold \n");
    }else
    {
        printf("Its normal");
    }
}