#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter the element in array=\n");

    for(int i=0;i<5;i++)
        {
        scanf("%d",arr+i);
        }

    printf("Display Array=\n");

    for(int i=0;i<5;i++)
    {
        printf("arr[%d]=%d \t",i,*(arr+i));
    }

    return 0;

}