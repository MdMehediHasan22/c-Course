#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertLowerCaseToUppercase(char *str);
int main(){
    char input_str[100];

    printf("Enter a string : ");
    fgets(input_str,sizeof(input_str),stdin);
    convertLowerCaseToUppercase(input_str);

    printf("Converted string: %s\n",input_str);
}
void convertLowerCaseToUppercase(char *str){
    while(*str){
        if(*str == 'a'|| *str == 'e'|| *str == 'i'|| *str == 'o'||*str == 'u'){
            //convert to uppercase

            *str = toupper(*str);
        }
        str++;
    }
}