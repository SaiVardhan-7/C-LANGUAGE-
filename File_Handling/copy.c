#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp1=NULL,*fp2=NULL;
    fp1=fopen("test.txt","r");
    if(fp1==NULL){
        printf("error");
        exit(1);
    }
    fp2=fopen("destination.txt","w");
    if(fp2==NULL){
        printf("error");
        exit(1);
    }
    char ch;
    while((ch=fgetc(fp1))!=EOF){
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}