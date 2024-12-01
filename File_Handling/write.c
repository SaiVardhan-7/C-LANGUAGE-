#include<stdio.h>
int main(){
    FILE *ptr=fopen("printtest.txt","w");
    char str[100];
    printf("Enter the sentence to print in text:\n");
    fgets(str,100,stdin);
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}