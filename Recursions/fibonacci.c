#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("Enter order:");
    scanf("%d",&n);
    int f=fib(n);
    printf("fibonacci=%d",f);
    return 0;
}
int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}
