#include<stdio.h>
#include<string.h>

struct vector
{
    int x;
    int y;
};

void calculateSum(struct vector v1,struct vector v2,struct vector sum);

int main()
{
    struct vector v1={5,6};
    struct vector v2={9,10};
    struct vector sum={0};

    calculateSum(v1,v2,sum);
    
    return 0;
}

void calculateSum(struct vector v1,struct vector v2,struct vector sum)
{
    
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("Sum of vector is %d ,%d",sum.x,sum.y);
}