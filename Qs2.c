#include<stdio.h>
int main(){
   int age;
   printf("enter age :");
   scanf("%d",&age);

   if(age>=18){
    printf("adult \n");
   }
   else if(age>13 && age<18){
    printf("Teeneger \n");
   }
   else{
    printf("not adult \n");
   }
   //ternary operator
   int mark;
   printf("enter the marks: \n");
   scanf("%d",&mark);
   mark>=80 ? printf("A+ \n") : printf("A- \n");
    return 0;
}