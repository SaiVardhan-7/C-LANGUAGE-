#include<stdio.h>
int main(){
   int n,a=1,b=1,fib=0;
   printf("Enter a number");
   scanf("%d",&n);
   for(int i=3;i<=n;i++){
      fib = a + b;
      a=b;
      b=fib;
   }
   printf("Fibonacci number of %d is %d",n,fib);

   return 0;
}