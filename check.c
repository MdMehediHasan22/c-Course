#include<stdio.h>
#include<string.h>

void checkChar(char str[],char ch);
int main()
{
  char str[]="Apna College";
  char ch = 'x';
  checkChar(str,ch);
}
void checkChar(char str[],char ch){
   for(int i = 0;str[i]!='\0';i++){
    if(str[i]==ch){
        printf("Character is present");
        return;
    }
   }
   printf("Character is Not present");
}