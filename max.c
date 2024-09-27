#include<stdio.h>
int find_max(int *a,int *b);
int main(){
  int num1,num2,max;
  printf("enter the first number: ");
  scanf("%d",&num1);
  printf("enter the 2nd number: ");
  scanf("%d",&num2);
  max = find_max(&num1,&num2);
  printf("%d\n",max);
  return 0;
}
int find_max(int *a,int *b){
    if(*a>*b){
        return *a;
    }
    else{
        return *b;
    }
}