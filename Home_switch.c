#include<stdio.h>
int main()
{
     int i=0,choice;
    do
    {
       printf("Enter your choice");
       scanf("%d",&i);
       switch (i)
       {
       case 1:
       {
            float r;
            printf("Enter radius value");
            scanf("%f",&r);
            float circle;
            circle=3.14*r*r;
            printf("the area of circle is : %f\n",circle);
            break;
        }
        case 2:
        {
            int l,b;
            printf("Enter l and b");
            scanf("%d%d",&l,&b);
            int rect=l*b;
            printf("%d",rect);
            break;
        }
        case 3: 
        {
            int side=5;
            printf("Area of side is %d \n",side*side);
        }
        default:
        {
            printf("end of main");
        break;
        }
    }
} while (i!=0);
    
}