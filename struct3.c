#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int rollno;
    float cgpa;
};
int main()
{
    struct student s1={"Sonal",1,9.8};
    printf("Student information:\n");
    printf("Roll no %d \n",s1.rollno);
    printf("name: %s \n",s1.name);
    printf("cgpa: %f \n",s1.cgpa);

    struct student *ptr;
    ptr=&s1;

   // printf("Student info: %s \n",*ptr);
    printf("student rollno using pointer*:%d \n",(*ptr).rollno);
    printf("Student (using-> arrow)name=%s \n",ptr->name);
    printf("Student CGPA using-> operator %f \n",ptr->cgpa);
    

    return 0;
}