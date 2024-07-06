#include<stdio.h>
#include<string.h>

    struct student
    {
        int rollno;
        float cgpa;
        char name[50];
    };
int main()
{
    struct student s1;
    s1.rollno=12;
    s1.cgpa=8.9;
    strcpy(s1.name,"Sonal");

    printf("name= %s cgpa=%f rollno=%d \n",s1.name,s1.cgpa,s1.rollno);

    struct student s2;
    s2.rollno=13;
    s2.cgpa=9.1;
    strcpy(s2.name,"Swapnil");

    printf("Name=%s cgpa=%f rollno=%d \n",s2.name,s2.cgpa,s2.rollno);

    struct student s3;
    s3.rollno=14;
    s3.cgpa=9.0;
    strcpy(s3.name,"Saurabh");

    printf("Name=%s cgpa=%f rollno=%d \n",s3.name,s3.cgpa,s3.rollno);
    
    return 0;
}