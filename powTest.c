#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("Enter the number you want to enter:\n");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
printf("%f \n",pow(i,2));
}

return 0;
}