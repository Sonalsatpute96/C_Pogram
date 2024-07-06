
#include<stdio.h>
int main()
{
int ch;
int radius=10;
int side_triangle=5;
printf("1.Area of circle. \n");
printf("2.Area of triangle. \n");
printf("3.Area of shpere.\n");

printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Area of circle is %f", 3.14*radius*radius);
	break;

case 2:printf("Area of Triagle having 3 sides are same is %d", side_triangle*side_triangle*side_triangle);
	break;

case 3:printf("Area of the shere is %f", 4*3.14*radius*radius);
	break;

default:printf("Invalid Choice \n");
}


return 0;
}
