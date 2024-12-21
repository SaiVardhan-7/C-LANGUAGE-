#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("sample.txt","r+");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    char str[100];
    fgets(str,100,stdin);
    fputs(str,fp);
    fclose(fp);
}