#include<stdio.h>
int main(){
    // int sum = 0;
    // for(int i = 5;i<=50;i++){
    //     sum=sum+i;
    // }
    // printf("sum is %d",sum);

    int i=1;

    print: 
          printf("%d \n",i);
          i++;

          if(i<5)
            goto print;


    return 0;
}