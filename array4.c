#include<stdio.h>
void main()
{
    int arr[2][3];

    arr[0][0]=90;
    arr[0][1]=92;
    arr[0][2]=89;

    arr[1][0]=88;
    arr[1][1]=85;
    arr[1][2]=90;
    
    printf("Marks=%d",arr[1][0]);
}