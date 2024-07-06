#include<stdio.h>
//int mergeArray(int a[5],int b[5],c[],c_size)
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    int a_size=5,b_size=5;
    int c_size=a_size+b_size;
    int c[c_size];
    
    for(int i=0;i<a_size;i++)
    {
        c[i]=a[i];
    }

    for(int i=0,j=a_size;i<b_size,j<c_size;i++,j++)
    {
        c[j]=b[i];
    }
    
    
    //mergeArray(a,b,c,c_size);
    for(int i=0;i<c_size;i++)
    {
        printf("%d \t",c[i]);
    }

}