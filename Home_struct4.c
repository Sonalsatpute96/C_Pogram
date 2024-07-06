/*Hello students....please practice questions as fallow :                
 1. Write a C program that defines a structure of a student
 eg( rollNumber , name , age , 
mobileNumber) . values of the structure should be taken from the user and display the result. 
● Allow the user to enter the values of the structure. 
● And display the result.*/

#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
    int age;
    int mob_no;
};

int main()
{
struct student s1;
printf("\n Enter Roll_no=");
scanf("%d",s1.roll_no);
}