#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("sample.txt","a");
    if(fp==NULL){
        printf("cannot open file");
        exit(1);
    }
    char str[100];
    printf("Enter a string to append:");
    fgets(str,100,stdin);
    fputs(str,fp);
    fclose(fp);
}