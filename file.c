#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("text.txt","r");

    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("Character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("Character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("Character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("Character = %c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("Character = %c\n",ch);

    // int n;
    // fscanf(fptr,"%d",&n);
    // printf("Character = %d\n",n);
    // fscanf(fptr,"%d",&n);
    // printf("Character = %d\n",n);
    // fscanf(fptr,"%d",&n);
    // printf("Character = %d",n);

    // fptr =fopen("text.txt","w");

    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'a');
    // fprintf(fptr,"%c",'n');
    // fprintf(fptr,"%c",'g');
    // fprintf(fptr,"%c",'o');
    
//   fptr =fopen("text.txt","r");
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));



    fclose(fptr);
}