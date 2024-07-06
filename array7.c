r#include<stdio.h>
void storeTable(int arr[][10],int n,int m,int no);
void main()
{
    int arr[2][10];
    storeTable(arr,0,10,2);
    storeTable(arr,1,10,3);
    printf("Printing table of 2:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",arr[0][i]);

    }
    printf("Printing table of 2:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",arr[1][i]);
    }

}

void storeTable(int arr[][10],int n,int m,int no)
{
    for(int i=0;i<10;i++)
    {
        arr[n][i]=no*(i+1);
    }
}