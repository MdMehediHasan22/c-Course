#include<stdio.h>
int main(){
    char c1='A', c2='B';
    int n1=100,n2=100000;

    printf("Value of ch1 = %c,\t",c1);
    printf("Address of ch1 = %p,\n",&c1);

     printf("Value of ch2 = %c,\t",c2);
    printf("Address of ch2 = %p,\n",&c2);

     printf("Value of n1 = %d,\t",n1);
    printf("Address of n1 = %p,\n",&n1);

     printf("Value of n2 = %d,\t",n2);
    printf("Address of n2 = %p,\n",&n2);


    //using array

    int ara[5]={50,60,70,80,90};

    printf("Value of Array: %d,%d,%d,%d,%d\n",ara[0],ara[1],ara[2],ara[3],ara[4]);
    printf("Address of ara is %p\n",ara);
    printf("Address of ara is ara[0] %p\n",&ara[0]);
    printf("Address of ara is ara[1] %p\n",&ara[1]);
    printf("Address of ara is ara[2] %p\n",&ara[2]);
    printf("Address of ara is ara[3] %p\n",&ara[3]);
    printf("Address of ara is ara[4] %p\n",&ara[4]);

    
 
}