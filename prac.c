#include<stdio.h>
int main(){
   int x=10;
   int *p;

   printf("%d\n",x);
   
   p=&x;
   *p=20;

   printf("%d\n",x);
   x=15;
   printf(" %d\n",x);
   printf("value stored at location %p is %d\n",p,*p);

   printf("Address of x= %p\n",&x);
   printf("Value of p: %p\n", p);
}