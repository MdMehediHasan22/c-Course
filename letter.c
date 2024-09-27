#include<stdio.h>
void upper_case(char *letter);
void lower_case(char *letter);
int main(){
   char letter;
    
    printf("upperCase Letters : \n");
    upper_case(&letter);
    lower_case(&letter);
}

void upper_case(char *letter){
    for (*letter = 'A';*letter<='Z';(*letter)++)
    printf("%c ",*letter);
}
void lower_case(char *letter){
     for (*letter = 'a';*letter<='z';(*letter)++)
    printf("%c ",*letter);
}