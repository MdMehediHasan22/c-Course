#include<stdio.h>

int sum(int a, int b);
void printTable(int n);
int main()
{
    int a,b;
    printf("Enter number a : ");
    scanf("%d",&a);
    printf("Enter number b : ");
    scanf("%d",&b);

    int s =  sum(a,b);
    printf("%d \n",s);

    int n;
    printf("Enter number  : ");
    scanf("%d",&n);
    printTable(n);  //argument/actual parameter

    return 0;

}

int sum(int x , int y){
    return x+y;
}

void printTable(int z){     //parameter/formal parameter
    for(int i = 0;i<=z;i++)
    {
        printf("%d \n",z*i);
    }
}