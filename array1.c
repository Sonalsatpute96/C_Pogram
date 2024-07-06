#include<stdio.h>
void main()
{
    int marks[2];

    printf("Enter physics marks :");
    scanf("%d ",&marks[0]);
    printf("Enter the math marks:");
    scanf("%d ",&marks[1]);

    printf("Physics = %d \n math=%d \n",marks[0],marks[1]);
}