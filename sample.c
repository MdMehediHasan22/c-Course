#include<stdio.h>

int func(char ch){
        if(48=='0'||49=='1'||50=='2'||51=='3'||52=='4'||53=='5'||54=='6'||55=='7'||56=='8'||57=='9'){
            return 1;
        }
        else {
            return 0;
        }

}
int main(){
    char n;
    printf("Enter a digit :");
    scanf("%c",&n);

    func(n);

    return 0;

}