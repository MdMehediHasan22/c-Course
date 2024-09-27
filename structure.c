#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 1703177;
    s1.cgpa = 9.2;
    strcpy(s1.name,"Mehedi");

    printf("student name = %s\n",s1.name);
    printf("student roll %d\n",s1.roll);
    printf("student cgpa = %f",s1.cgpa);

    return 0;
}