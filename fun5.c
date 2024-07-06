#include<stdio.h>
void printValue(float value);

void main()
{
    float value;
    printf("Enter the value of the item:");
    scanf("%f",&value);
    printValue(value);
    printf("\n Value of item is %f",value);
}

void printValue(float value)
{
    value=value+(value*0.18);
    printf("After adding GST %f",value);

}