#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int s=sum(n);
    printf("Sum=%d",s);
    return 0;
}
int sum(int n){
    if(n==0)  return 0;
    return n+sum(n-1);
}