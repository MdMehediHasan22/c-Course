#include<stdio.h>
int fact(int n);
int main(){
    int n;

printf("enter a number :\n");
scanf("%d",&n);
printf("%d \n",fact(n));
}
int fact(int n){
    if(n==1)
    {
        return 1;
        }
    int factNm1=fact(n-1);
    int factN = factNm1*n;
    return factN;
}