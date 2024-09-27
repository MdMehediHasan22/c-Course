#include<stdio.h>
void printInverse(int *arr,int size);
int main(){
    int n;
    printf("enter the size of the array :");
    scanf("%d",&n);

    int arr[n];
    printf("enter the %d elements : ",n);
    for(int i =0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printInverse(arr,n);
}
void printInverse(int *arr,int size){
    for(int i=size-1;i>=0;i--){
        printf("%d ",*(arr+i));
    }
}