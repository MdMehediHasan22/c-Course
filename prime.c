#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the number :");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        if(n%i==0)
        count++;
        break;
    }
    if(count==0){
        printf("%d the  number is prime",n);
    }
    else{
        printf("%d the number is not prime",n);
    }
}