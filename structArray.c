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
    struct student it[50];
    it[0].rollno=1;
    it[0].cgpa=88;
    strcpy(it[0].name,"Sonal");

    printf("Name=%s RollNo=%d CGPA=%f \n",it[0].name,it[0].rollno,it[0].cgpa);

    it[1].rollno=2;
    it[1].cgpa=78;
    strcpy(it[1].name,"Swapnil");

    printf("Name=%s RollNo=%d cgpa=%f \n",it[1].name,it[1].rollno,it[1].cgpa);

    

    return 0;
}