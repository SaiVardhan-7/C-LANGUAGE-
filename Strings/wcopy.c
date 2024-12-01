#include<stdio.h>
#include<string.h>
int main(){
    char s1[50],s2[50];
    printf("Enter a string:\n");
    fgets(s1,50,stdin);
    for(int i=0;i<50;i++){
        s2[i]=s1[i];
    }
    puts(s2);
    return 0;
}