#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("sample.txt","w");
    if(fp==NULL){
        printf("Can't open file");
        exit(1);
    }
    char str[100];
    fgets(str,100,stdin);
    fputs(str,fp);
    fclose(fp);
}