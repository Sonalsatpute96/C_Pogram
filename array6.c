#include<stdio.h>
void printArray(int arr[],int n);
void reverse(int arr[],int n);

void main()
{
    int arr[]={1,2,3,4,5,6};
    int n;
    reverse(arr,6);
    printArray(arr,6);
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n %d",arr[i]);
    }
}
void reverse(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int firstVal=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstVal;
    }
}
