#include<stdio.h>
void bubbleSort(int arr[],int n);
void printArray(int arr[],int n);

void main()
{
    int arr[]={21,5,11,7,3};
    int n=5;
    printf("Sorted array by bubble sort:\n");
    bubbleSort(arr,n);
 
}

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
       printArray(arr,n);
}

void printArray(int arr[],int n)
{
   for(int i=0;i<5;i++)
   {
    printf("%d \n",arr[i]);
   } 
}