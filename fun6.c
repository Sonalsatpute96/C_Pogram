#include<stdio.h>

void squareArea(int side);
void rectangleArea(int l,int b);
void circleArea(float r);

int main()
{
    int side ;
    printf("Enter side for square:");
    scanf("%d",&side);
    squareArea(side);

    int l,b;
    printf("\n Enter length:");
    scanf("%d",&l);
    printf("\n Enter breadth");
    scanf("%d",&b);
    rectangleArea(l,b);

    float r;
    printf("\n Enter the radius");
    scanf("%f",&r);
    circleArea(r);

    return 0;
}

void squareArea(int side)
{
    printf("\n Area of square=%d",side*side);
}
void rectangleArea(int l,int b)
{
    printf("\n Area of rectangle=%d",l*b);
}

void circleArea(float r)
{
    printf("\n Area of circle id=%f",3.14*r*r);
}