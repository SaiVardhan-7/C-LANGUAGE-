#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    printf("Enter the string:\n");
    fgets(ch,50,stdin);
    int l=0;
    for(int i=0;ch[i]!='\0';i++){
        l++;
    }
    printf("Length of the string=%d",l);
    return 0;
}