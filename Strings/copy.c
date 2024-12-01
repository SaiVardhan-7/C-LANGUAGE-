#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    printf("Enter the string:\n");
    fgets(ch,50,stdin);
    char s[50];
    strcpy(s,ch);
    puts(s);
    return 0;
}