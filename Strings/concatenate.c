#include<stdio.h>
#include<string.h>
int main(){
   char s1[50],s2[50];
   printf("Enter s1 and s2 strings:");
   gets(s1);               //fgets is not concatenating side by side but in new line for strcat
   gets(s2);
   strcat(s1,s2);
   puts(s1);
   return 0;
}