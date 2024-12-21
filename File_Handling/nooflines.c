#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("matter.txt","r");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    char ch;
    int count=1;
    while((ch=fgetc(fp))!=EOF){
        if(ch=='\n'){
            count++;
        }
    }
    printf("No.of lines of the file is %d",count);
    fclose(fp);
}