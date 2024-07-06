#include<stdio.h>

int similarElement(int arr1[5],int arr1_size,int arr2[5],int arr2_size);

 int main()
 {
    int arr1[]={1,2,6,9,5};
    int arr2[]={6,4,3,2,5};
    int arr1_size=5;
    int arr2_size=5;
    similarElement(arr1,arr1_size,arr2,arr2_size);
    return 0;
 }

int similarElement(int arr1[5],int arr1_size,int arr2[5],int arr2_size)
 {
    for(int i=0;i<arr1_size;i++)
    {
        for(int j=0;j<arr2_size;j++)
        if(arr1[i]==arr2[j])
        {
            printf("Common element are=%d \n",arr1[i]);
        }
    }
    
 }