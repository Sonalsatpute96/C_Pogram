#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("student.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter the information of sudent: \n");
    scanf("%s \n",name);
    scanf("%d \n",&age);
    scanf("%f \n",&cgpa);

    fprintf(fptr,"%s \n",name);
    fprintf(fptr,"%d \n",age);
    fprintf(fptr,"%f \n",cgpa);

    fclose(fptr);
    return 0;
}