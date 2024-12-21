#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    FILE *fp=NULL;
    fp=fopen("printtest.txt","r");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}