#include<stdio.h>
char countLength(char arr[]);
int main(){
    char name[100];
    fgets(name,100,stdin);

    printf("%d",countLength(name));
}
char countLength(char arr[]){
    int count = 0;
    for(int i=0;arr[i]!=0;i++){
       
        count++;
    }
    return count-1;
}