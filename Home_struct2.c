#include<stdio.h>
#include<string.h>
typedef struct college_information
{
    int id;
    char name[20];
    char location[20];
}college;
int input(college *c);
int output(college *c);
int main()
{
    college c;
    //college *ptr;
    college *ptr=&c;
    printf("\n Input\n");
    input(&c);
    printf("\n Output");
    output(&c);
    return 0;
}

int input(college *c)
{ 
    printf("\n Enter id");
    scanf("\n %d",&c->id);
    printf("\nEnter college name");
    scanf("\n %s",c->name);
    printf("\n Enter location of college");
    scanf("\n %s",c->location);
}
int output(college *c)
{
    printf("\n College id=%d",c->id);
    printf("\n college name=%s",c->name);
    printf("\n College location=%s",c->location);
}
