#include<stdio.h>
int main(){
 /*   Write a program to print all the ASCII values
and their equivalent characters of 26 alphabets
using a while loop. (Capital case)*/
 char ch;
 ch = 'A';
 while(ch<='Z'){
    printf("ASCII value of %c is %d\n",ch,ch);
    ch++;
 }
    return 0;
}