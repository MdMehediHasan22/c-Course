#include<stdio.h>
int main(){
    int n;
    do
    {
        printf("enter the number : ");
        scanf("%d ",&n);
        if(n%7 == 0)
        {
            break;
        }
        printf("%d\n",n);
    } while(1);
    
    printf("Thank you");
    return 0;
}
