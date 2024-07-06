#include<stdio.h>
int main()
{
    int ch;
    do
    { 
    printf("1.area of circle\n");
    printf("2.Area of rectangle\n");
    printf("3.check even or odd\n");
    printf("4.area of square\n");

    printf("Enter your choice\n=");
    scanf("%d",&ch);
    
    switch(ch)
    {
    case 1:
    {   int r;
        printf("Enter radius\n");
        scanf("%d",&r);
        printf("Area of circle is %f",3.14*r*r);
        break;
    }
    case 2:
    {
        int l=5,b=5;
        printf("\nArea of rectangle is %d",l*b);
        break;
    }
    case 3:
    {
        int x;
        printf("\nEnter a no:");
        scanf("%d",&x);
        if(x%2==0)
        printf("\nNo is even");
            else
            printf("\n No is odd");
        break;
    }

    case 4:
    {
        int side=5;
        printf("\n Area of square is %d",side*side);
        break;
    }
    }
   
    }while(ch!=0);
    return 0;
    
}