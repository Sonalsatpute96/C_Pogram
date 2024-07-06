#include<stdio.h>
void printArray(int *arr,int n);

void main()
{
    int arr[]={1,2,3,4,5,6};
    printArray(&arr,6);
}

void printArray(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
}
