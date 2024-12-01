#include<stdio.h>
int decrease(int n);
void increase(int x,int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    decrease(n);
    increase(1,n);
    return 0;
}
int decrease(int n){
    if(n==0)  return 0;
    printf("%d\n",n);
    decrease(n-1);
}
void increase(int x,int n){
    if(x>n)  return;
    printf("%d\n",x);
    return increase(x+1,n);    
}