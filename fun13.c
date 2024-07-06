#include<stdio.h>
#include<math.h>

double squarRoot(double n);

void main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    squarRoot(n);
    printf("The square root %f",squarRoot(49));

}
double squarRoot(double n)
{
    printf("%f",sqrt(n));
    return sqrt(n);
}
