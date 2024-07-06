#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of student:(0-100)");
    scanf("%d",&marks);

    marks>30 ?printf("PASS") : printf("FAIL");
    return 0;
}