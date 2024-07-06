#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("odd.txt","w");
    
    int n;
    printf("Enter no till you want odd no");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        printf("odd no:%d \n",i);
        fprintf(fptr,"Odd no=%d \n",i);
        }
    }

    fclose(fptr);
    return 0;
}