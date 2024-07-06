#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array=\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter element of an array=");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element of an array=");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",a[i]);
    }
    
    printf("Lets find min max value\n");
    int max=a[0];
    int min=a[0];
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimun value=%d \n",min);
    printf("Maximum value =%d",max);
    return 0;
}