#include<stdio.h>
int main(){

    int n,i=0;
    printf("enter the number :");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d \n",i);
        i++;
    }

    printf("enter the number :");
    scanf("%d",&n);
    int sum=0,j;
    for(i=0,j=n;i<=n && j>=1;i++,j--){
        sum=sum+i;
        printf("%d \n",j);
    }
    printf("%d \n",sum);

    printf("enter the number :");
    scanf("%d",&n);
    i=2;
    do{
     printf("%d \n",i);
     i++;
    }while(i<=n);

    return 0;
}