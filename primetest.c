#include<stdio.h>
#include<stdbool.h>
bool isThePrime(int n);
int main()
{
int n;
printf("Enter the no u want to enter:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(isThePrime(i))
{
printf("prime no=%d \n",i);
}
}
return 0;
}

bool isThePrime(int n)
{
	if(n==0|n==1)
	{
	return false;
	}
	for(int i=2;i<n;i++)
	{
	if(n%i==0)
	{
	return false;
	}
    }
  return true;
	
}