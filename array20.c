#include<stdio.h>

void leftRotate(int arr[],int n);
void countRotate(int arr[],int n,int count);
void printArray(int arr[],int n);

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int count=3;
    //leftRotate(arr,n);
    countRotate(arr,n,count);
    printArray(arr,n);
    
    return 0;
}

void leftRotate(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;

}

void countRotate(int arr[],int n,int count)
{
    for(int i=0;i<count;i++)
    {
        leftRotate(arr,n);
    }

}

void printArray(int arr[6],int n)
{

    
    for(int i=0;i<n;i++)
        {
        printf("%d\n",arr[i]);
        }
    

}
