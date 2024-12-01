#include<stdio.h>
int main(){
    //WAP to print the sum of given number and its reverse.
 int n,N,reverse=0;
 printf("Enter a number");
 scanf("%d",&n);
 N=n;
 while(n!=0){
   reverse = reverse*10 + n%10;
   n = n/10;
 }
 printf("Sum of given number and its reverse number is %d",N+reverse);

 return 0;
}