#include<stdio.h>
#include<math.h>
void calculatePrice(float value);
int main(){
   float value = 100.00;
   calculatePrice(value);
   printf("value is : %f \n",value);

   return 0;
}
void calculatePrice(float value){
    value = value + (.18*value);
    printf("final price is : %f \n",value);
}