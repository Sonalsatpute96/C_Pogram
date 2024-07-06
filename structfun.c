#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rollno;
    float cgpa;
};

void printInfo(struct student s1);

int main()
{
    struct student s1={"Swapnil",2,9.5};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1)
{
    printf("Student info:\n");
    printf("Name=%s \n",s1.name);
    printf("Roll No=%d \n",s1.rollno);
    printf("CGPA=%f \n",s1.cgpa);
}