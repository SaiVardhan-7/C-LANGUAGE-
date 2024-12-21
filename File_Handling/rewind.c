#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("test.txt","r");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    char ch;
    fseek(fp,5,SEEK_SET);
    while((ch=fgetc(fp))!=EOF){
        fputc(ch,stdout);
    }
    rewind(fp);
    printf("\n");
    while((ch=fgetc(fp))!=EOF){
        fputc(ch,stdout);
    }
    fclose(fp);
}