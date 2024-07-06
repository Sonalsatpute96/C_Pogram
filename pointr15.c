#include<stdio.h>
void maximum(int arr[],int n);
void main()
{
    int arr[4]={1,2,3,4};
    int n=4;

    maximum(arr,n);
    
}

void maximum(int arr[],int n)
{
    int max;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }

    printf("Max no is=%d",arr[0]);
}