#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    printf("Enter the string:\n");
    fgets(ch,50,stdin);
    int l=strlen(ch);
    printf("Length of the string=%d",l);
    return 0;
}