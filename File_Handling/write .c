#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("sample.txt","w+");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    char str[100];
    char ch;
    fgets(str,100,stdin);
    fputs(str,fp);
    rewind(fp);
    while((ch=fgetc(fp))!=EOF){
        fputc(ch,stdout);
    }
    fclose(fp);
}