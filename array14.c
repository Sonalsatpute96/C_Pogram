#include<stdio.h>

void Acending(int arr[],int n);
void printArray(int arr[],int n);
int main()
{
    int arr[]={11,223,23,434,5,};
    int n=5;
    Acending(arr,n);
    
    return 0;
}

void Acending(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printArray(arr,n);
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n Decending order=%d",arr[i]);
    }
}