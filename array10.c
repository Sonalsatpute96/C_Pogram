#include<stdio.h>
int findNo(int arr[],int l,int r,int x);
int main()
{
    int arr[5]={1,3,5,7,9};
    int n=7;
    int x=9;
    int index1=findNo(arr,0,n-1,x);
    printf("The number is present at the index %d",index1);
}
int findNo(int arr[],int l,int r,int x)
{
    if(x>=1)
    {
        int mid=(l+r)/2;
        if(x==arr[mid])
        {
            return mid;
           // printf("%d",mid);
           }else if(x<arr[mid])
            {           
            return findNo(arr,l,mid-1,x);
            }else if(x>arr[mid])
            {
            return findNo(arr,mid+1,r,x);
            }else
            {
                printf("No is not present");
            }       

    return mid;
            
    }
    
    
}
