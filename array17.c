#include<stdio.h>

int removeElement(int arr[5],int size,int value);

 int main()
 {
    int arr[]={1,2,1,9,1};
    int size=5;
    int value=1;
    removeElement(arr,size,value);
    return 0;
 }

 int removeElement(int arr[5],int size,int value)
 {
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=value)
        {
            printf("%d \t",arr[i]);
        }
    }
 }