#include<stdio.h>
int main()
{
    FILE*fptr;
    fptr=fopen("test.txt","w");

    fputc('S',fptr);
    fputc('W',fptr);
    fputc('A',fptr);
    fputc('P',fptr);
    fputc('N',fptr);
    fputc('I',fptr);
    fputc('L',fptr);
    return 0;
}