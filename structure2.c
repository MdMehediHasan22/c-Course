#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {1703177,2.66,"Mehedi"};
    printf("student roll= %d\n",s1.roll);
    printf("student cgpa= %d\n",s1.cgpa);
    printf("student name= %d\n",s1.name);

    struct student *ptr = &s1;
    printf("student roll = %d\n",(*ptr).roll);
    printf("student cgpa = %f\n",ptr->cgpa);
    printf("student name = %s\n",ptr->name);
    s1.roll = 1701;
    printInfo(s1);

    return 0;
}

void printInfo(struct student s1){
    printf("student information: \n");
    printf("student.roll=%d\n",s1.roll);
    printf("student.cgpa=%f\n",s1.cgpa);
    printf("student.name=%s\n",s1.name);
}