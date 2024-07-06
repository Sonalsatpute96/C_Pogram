#include<stdio.h>
void average(int arr[],int n);
void main()
{
    int arr[]={1,2,3,4,5};
    average(arr,5);
}

void average(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int avg=sum/n;
    printf("Average is %d",avg);
}