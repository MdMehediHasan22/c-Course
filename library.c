#include<stdio.h>
#include<string.h>

int main(){
    // char str1[]="Hello";
    // char str2[]="World";
   
    // strcpy(str1,str2);
    // puts(str1);

//     char str1[100]="Hello";
//     char str2[]="World";
//     strcat(str1,str2);
//     puts(str1);
   
//    char firstStr[]="Apple";
//    char secStr[]="Banana";
//    printf("%d",strcmp(secStr,firstStr));

char str[100];
char ch;
int i=0;

while(ch!='\n'){
    scanf("%c",&ch);
    str[i]=ch;
    i++;
}
str[i]='\0';
puts(str);
    return 0;
}