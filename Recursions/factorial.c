#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int f=fact(n);
    printf("factorial of %d is %d",n,f);

    return 0;
}
int fact(int n){
    if(n<=1)  return 1;
    return n*fact(n-1);
}
