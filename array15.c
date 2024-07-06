#include<stdio.h>
int removeDuplicate(int arr[],int n);
int printArray(int arr[],int n);
int main()
{
    int arr[]={1,2,5,5,5,6};
    //int n=sizeof(arr[0]);
    int n=6;
    // printf("%d",n);
    n=removeDuplicate(arr,6);
    printArray(arr,n);
   
    
    return 0;

}

int removeDuplicate(int arr[],int n)
{
    int temp[n];
    if((n==0||n==1))
        return n;

    int j=0;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
          temp[j++]=arr[i]; 
        }

    }

    temp[j++]=arr[n-1];
     for(int i=0;i<n;i++)
    {
       arr[i]=temp[i];
    }
return j;
    

}

int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nThe Final Array=%d",arr[i]);
    } 
   
}