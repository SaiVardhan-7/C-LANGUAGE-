#include<stdio.h>
#include<string.h>
void concatenate(char s1[], char s2[]);
int main(){
    char s1[50],s2[50];
    printf("Enter s1 and s2 strings:\n");
    gets(s1);
    gets(s2);
    concatenate(s1,s2); 
    puts(s1);
    return 0;
}
void concatenate(char s1[], char s2[]){
    int i=0,j=0;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
}