#include<stdio.h>
#include<string.h>
int main(){
   char s1[50],s2[50];
   printf("Enter s1 and s2 strings:\n");
   fgets(s1,50,stdin);
   fgets(s2,50,stdin);
   int l=strcmp(s1,s2);
   printf("Difference=%d",l);
   return 0;
}