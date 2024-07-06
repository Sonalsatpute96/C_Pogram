#include<stdio.h>
#include<string.h>

struct address
{
    char name[50];
    int houseNo;
    int block;
    char city[50];
    char state[50];
};

void printinfo(struct address adds);

int main()
{
    struct address adds[5];

    printf("Enter info of 1st person:\n");
    scanf("%s \n",adds[0].name);
    scanf("%d \n",&adds[0].houseNo);
    scanf("%d \n",&adds[0].block);
    scanf("%s \n",adds[0].city);
    scanf("%s \n",adds[0].state);

    printf("Enter info of 2nd person:\n");
    scanf("%s \n",adds[1].name);
    scanf("%d \n",&adds[1].houseNo);
    scanf("%d \n",&adds[1].block);
    scanf("%s \n",adds[1].city);
    scanf("%s \n",adds[1].state);

    printf("Enter info of 3rd person:\n");
    scanf("%s \n",adds[2].name);
    scanf("%d \n",&adds[2].houseNo);
    scanf("%d \n",&adds[2].block);
    scanf("%s \n",adds[2].city);
    scanf("%s \n",adds[2].state);

    printf("Enter info of 4th person:\n");
    scanf("%s \n",adds[3].name);
    scanf("%d \n",&adds[3].houseNo);
    scanf("%d \n",&adds[3].block);
    scanf("%s \n",adds[3].city);
    scanf("%s \n",adds[3].state);

    printf("Enter info of 5th person:\n");
    scanf("%s \n",adds[4].name);
    scanf("%d \n",&adds[4].houseNo);
    scanf("%d \n",&adds[4].block);
    scanf("%s \n",adds[4].city);
    scanf("%s \n",adds[4].state);

    printinfo(adds[0]);
    printinfo(adds[1]);
    printinfo(adds[2]);
    printinfo(adds[3]);
    printinfo(adds[4]);



    return 0;
}

void printinfo(struct address adds)
{
    printf("Address=%s %d %d %s %s \n",adds.name,adds.houseNo,adds.block,adds.city,adds.state);

}