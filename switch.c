#include<stdio.h>
int main()
{
    int day;
    printf("Enter a day(1-7)");
    scanf("%d",&day);

    switch (day)
    {
        case 1:printf("Monday \n");
        break;
        case 2:printf("TUESDAY \n");
        break; 
        case 3:printf("WEDNESDAY \n");
        break; 
        case 4:printf("THURSDAY \n");
        break; 
        case 5:printf("FRIDAY \n");
        break;
        case 6:printf("SATURDAY \n");
        break;
         case 7:printf("SUNDAY \n");
        break;
        default:printf("please enter valid no:");
    }
    return 0;
}