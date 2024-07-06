#include<stdio.h>
#include<string.h>
typedef struct StudentInformation
{
    int id;
    char name[20];
    int age;
}student;
void display(student s);
int main()
{
student s;
s.id=1;
strcpy(s.name,"Sonal");
s.age=25;
display(s);
return 0;
}
void display(student s)
{
    printf("\n id=%d",s.id);
    printf("\n name=%s",s.name);
    printf("\n Age=%d",s.age);
}
