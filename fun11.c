#include<stdio.h>

void calculateperc(int math,int sci,int sanskrit);

void main()
{
    int math,sci,sanskrit;
    printf("Enter marks of math");
    scanf("%d",&math);
    printf("Enter marks of sci");
    scanf("%d",&sci);
    printf("Enter marks of sanskrit");
    scanf("%d",&sanskrit);
    calculateperc(math,sci,sanskrit);
}

void calculateperc(int math,int sci,int sanskrit)
{
    int per=(math+sci+sanskrit)/3;
    printf("percentage=%d",per);
}
