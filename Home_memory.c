#include<stdio.h>
#include<stdlib.h>
int main()
{   int n,m,i;
    printf("Enter the size of array u want\n");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    //int *arr=(int *)calloc(n,sizeof(int));
    printf("Enter the value in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Printing an array\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",*(arr+i));
    }
    printf("\n Enter no of element yo want more\n");
    scanf("%d",&m);

    arr=(int *)realloc(arr,m*sizeof(int));
    printf("\nEnter more element\n");
    for(int j=i;j<n+m;j++)
    {
        scanf("%d",(arr+j));
    }
    printf("Printing an array\n");
    for(int i=0;i<n+m;i++)
    {
        printf("%d \t",*(arr+i));
    }



\

}