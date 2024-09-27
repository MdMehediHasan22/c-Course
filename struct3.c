#include<stdio.h>
#include<string.h>

typedef struct student {
    int roll;
    char name[100];
    float cgpa;
}stu;

typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];

}coe;

int main(){
    stu s1;
    coe s2;
    s2.roll=1664;
    s2.cgpa=3.00;
    strcpy(s2.name,"Shradha");

    printf("Student name : %s\n",s2.name);
    printf("Student roll; %d\n",s2.roll);
    printf("Student cgpa : %f\n",s2.cgpa);

    return 0;
}