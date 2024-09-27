#include<stdio.h>
int main(){
    char str[100];
    fgets(str ,100, stdin );
    puts(str);
    
    char *canChange = "hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    //  char cannotChange[] = "hello World";
    // puts(cannotChange);
    // cannotChange = "Hello";
    // puts(cannotChange);
    return 0;
}
