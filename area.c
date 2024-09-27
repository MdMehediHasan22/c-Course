#include<stdio.h>
#include<math.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);

int main(){
    float a=5.0;
    float b= 10;
    printf("area is : %f\n",rectangleArea(a,b));
    printf("area is : %f\n",circleArea(3));
    printf("area is : %f\n",squareArea(6));

    return 0;
}

float squareArea(float side){
    return side*side;
}
float circleArea(float rad)
{
    return 3.1416*rad*rad;
}
float rectangleArea(float a,float b){
    return a*b;
}