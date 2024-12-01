#include<stdio.h>
#include<string.h>
int main(){
    char ch[200];
    printf("Enter the string:\n");
    fgets(ch,200,stdin);
    for(int i=0; ch[i]!='\0'; i++){
        if(ch[i]>=65&&ch[i]<=90){
            ch[i]=ch[i]+32;
        }
        else if(ch[i]>=90&&ch[i]<=122){
            ch[i]=ch[i]-32;
        }
        else{
            ch[i]=ch[i];
        }
    }
    puts(ch);
    return 0;
}