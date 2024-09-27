#include<stdio.h>
int calcPercentage(int science,int math, int islam);

int main(){
    int sc,math,is;
    printf("enter three subject numbers : \n");
    scanf("%d %d %d",&sc,&math,&is);
    printf("Average marks is %d\n",calcPercentage(sc,math,is));

return 0;
}
int calcPercentage(int science, int math, int islam){
    return((science+math+islam)/3);
}