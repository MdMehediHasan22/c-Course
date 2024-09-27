#include<stdio.h>
int main(){
    char small_letter,capital_letter;
    printf("Enter a small_letter :");

    small_letter = getchar();
    capital_letter=small_letter-32;

    printf("%c",capital_letter);

    return 0;

}