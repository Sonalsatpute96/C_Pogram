#include<stdio.h>

struct fruit
{
    int id;
    char name[20];
    char color[20];
    float price;
};
typedef struct vehicle
{
    int car_no;
    char fuel_type[20];
    int speed;
}veh;

int main()
{   //struct fruit f1,f2;
    struct fruit f1={1,"Apple","Red",100.00};
    struct fruit f2={2,"Mango","Yellow",200.00};
    struct fruit f3={3,"Pomegranate","Red",180.00};
    printf("Fruit Apple\n");
    printf("\t %d \t",f1.id);
    printf("\t %s",f1.name);
    printf("\t %s ",f1.color);
    printf("\t %f ",f1.price);

    printf("\n Fruit Mango\n");
    printf("\t %d \t",f2.id);
    printf("\t %s",f2.name);
    printf("\t %s ",f2.color);
    printf("\t %f ",f2.price);

    printf("\n Fruit Mango\n");
    printf("\t %d \t",f3.id);
    printf("\t %s",f3.name);
    printf("\t %s ",f3.color);
    printf("\t %f ",f3.price);
    
    int n;
    printf("\n Enter the size of an array:");
    scanf("%d",&n);
    veh v1[n];
    
    for(int i=0;i<n;i++)
    {
        printf("\ncar %d= car_no=",i+1);
        scanf("%d",&v1[i].car_no);
        printf("\n car %d fuel type=",i+1);
        scanf("%s",v1[i].fuel_type);
        printf("\n car %d speed=",i+1);
        scanf("%d",&v1[i].speed);
    }
    printf("\n Display Structure of vehicle");
    for(int i=0;i<n;i++)
    {
        printf("\ncar %d car no=%d",i+1,v1[i].car_no);
        printf("\ncar %d fuel type=%s",i+1,v1[i].fuel_type);
        printf("\n car %d car speed=%d",i+1,v1[i].speed);
    }
    return 0;
}