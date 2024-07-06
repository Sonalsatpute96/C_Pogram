#include<stdio.h>
int largest(int arr[4],int n);
int main()
{
    int arr[]={5,10,15,20};
    int n=4;
    largest(arr,4);
    printf("\n 1.%d",(arr+2));
    printf("\n 2.%d",*(arr+2));

   // printf("Largest element is %d",largest(arr,n));
    return 0;
}

int largest(int arr[4],int n)
{
    int max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];

    }
    printf("Largest no is %d",max);


}