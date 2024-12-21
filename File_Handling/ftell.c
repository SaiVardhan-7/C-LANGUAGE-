#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("test.txt","r");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    char str[100];
    fseek(fp,0,SEEK_END);
    printf("%d",ftell(fp));
    fclose(fp);
}