#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fib(n);
    return 0;
}
int fib(int n){
    int a=1,b=1,fib=0;
    for(int i=3;i<=n;i++){
        fib=a+b;
        a=b;
        b=fib;
    }
    printf("Fibonacci number of %d is %d",n,fib);
    return fib;
}