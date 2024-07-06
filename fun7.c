#include<stdio.h>
void printHW(int count);
void main()
{
    printHW(5);
}

void printHW(int count)
{
    if(count==0)
        return;
    else 
    {
        printf("\n Hello World");
    }
   printHW(count-1);
}