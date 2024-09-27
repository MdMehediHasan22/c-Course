#include<stdio.h>
float conversionTemp(float celsius);

int main(){
  printf("far : %f\n",conversionTemp(37));
}
float conversionTemp(float celcius){
    float far=celcius*(9.0/5.0)+32;
    return far;
}