#include<stdio.h>
#include<string.h>

typedef struct bankaccount
{
    char name[50];
    int accountNo;
}acc;

int main()
{
    acc acc1={"Sonal",123};
    acc acc2={"swapnil",456};

    printf("Name=%s \n",acc1.name);
    printf("Account no=%d \n",acc1.accountNo);

    printf("Name=%s \n",acc2.name);
    printf("Account no=%d \n",acc2.accountNo);
    return 0;

}