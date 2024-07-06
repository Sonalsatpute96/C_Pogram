#include<stdio.h>
int circle(int *radius);

int main()
{
    int r=10;
    circle(&r);
    //printf("\n area of circle is=%f",area);
    return 0;
}
int circle(int *radius)
{
    printf("Area of circle is %f",3.14*(*radius)*(*radius));
    

}