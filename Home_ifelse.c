#include<stdio.h>
int main()
{
    int ch;
    printf("1.area of circle\n");
    printf("2.Area of rectangle\n");
    printf("3.check even or odd\n");
    printf("4.area of square\n");

    printf("Enter your choice\n=");
    scanf("%d",&ch);
    
    if(ch==1)
    {
        int r;
        printf("Enter radius\n");
        scanf("%d",&r);
        printf("Area of circle is %f",3.14*r*r);
    }else if(ch==2)
    {
        int l=5,b=5;
        printf("\nArea of rectangle is %d",l*b);
    }else if(ch==3)
    {
        int x;
        printf("\nEnter a no:");
        scanf("%d",&x);
        if(x%2==0)
        printf("\nNo is even");
            else
            printf("\n No is odd");
    }else if(ch==4)
    {
        int side=5;
        printf("\n Area of square is %d",side*side);
    }else
    {
        printf("\nInvalid choice");
    }
    
   
    return 0;
    
}