#include<stdio.h>
#include<string.h>

typedef struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
}add;

void printAdd(add adds);

int main(){
    add adds[5];
    printf("enter info for person 1:");
    scanf("%d",&adds[0].houseNo);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);
    
        printf("enter info for person 2:");
    scanf("%d",&adds[1].houseNo);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

        printf("enter info for person 3:");
    scanf("%d",&adds[2].houseNo);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

        printf("enter info for person 4:");
    scanf("%d",&adds[3].houseNo);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

        printf("enter info for person 5:");
    scanf("%d",&adds[4].houseNo);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);
}

void printAdd(add adds){
    printf("adress is : %d,%d,%s,%s\n",adds.houseNo,adds.block,adds.city,adds.state);
}
