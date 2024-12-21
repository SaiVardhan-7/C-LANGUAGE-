#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("test.txt","a+");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    char str[100];
    char ch;
    fputs("file handling in c programming",fp);
    rewind(fp);
    while((ch=fgetc(fp))!=EOF){
        fputc(ch,stdout);
    }
    fclose(fp);
}