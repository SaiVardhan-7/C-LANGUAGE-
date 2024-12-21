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
    fseek(fp,25,SEEK_SET);
    fgets(str,100,fp);
    puts(str);
    fseek(fp,-7,SEEK_END);
    fgets(str,100,fp);
    puts(str);
    fseek(fp,-5,SEEK_CUR);
    fgets(str,100,fp);
    puts(str);
    fclose(fp);
}