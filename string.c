#include<stdio.h>
void printString(char arr[]);
int main(){
    char firstName[] = "Mehedi";
    char lastName[] = "Hasan";
    
    printString(firstName);
    printString(lastName);
    char name[50];
    scanf("%s",name);
    printf("the name is %s",name);
    return 0;
}

void printString(char arr[]){
    for(int i=0;arr[i]!='\0' ; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}