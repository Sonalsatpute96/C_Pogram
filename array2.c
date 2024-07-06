#include<stdio.h>

int main()
{
    float item[3];
    printf("Enter the values of item:\n");
    scanf("%f",&item[0]);
    scanf("%f",&item[1]);
    scanf("%f",&item[2]);

    printf("After adding GST\n");
    printf("\n Item 1=%f",item[0]+item[0]*0.18);
    printf("\n Item 2=%f",item[1]+item[1]*0.18);
    printf("\n Item 3=%f",item[2]+item[2]*0.18);
    

}