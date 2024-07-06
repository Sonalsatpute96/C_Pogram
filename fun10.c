#include<stdio.h>

int convertTemp(float celcius);

int main()
{
    printf("program to convert 0 degree celcius to faraneit\n");
    float far=convertTemp(0);
    printf("Temperature in faraneit is %f",far);
}

int convertTemp(float celcius)
{
    float far=(celcius*0.18)+32;
    return far;
    
}
