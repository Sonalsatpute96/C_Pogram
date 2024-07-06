#include<stdio.h>
int maximum(int arr[4],int n);
int minimum(int arr[4],int n);
int main()
{
    int arr[]={5,100,15,20};
    int n=4;
    maximum(arr,4);
    minimum(arr,4);
   // printf("Largest element is %d",largest(arr,n));
    return 0;
}

int maximum(int arr[4],int n)
{
    int max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];

    }
    printf("maximum no is %d \n",max);


}

int minimum(int arr[4],int n)
{
    int min=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];        }
    }
    printf("Minimun no is %d",min);
}