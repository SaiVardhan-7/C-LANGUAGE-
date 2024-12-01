#include<stdio.h>

int sum(int a,int b);

int main(){
    int l,b;
    printf("Enter two numbers:");
    scanf("%d%d",&l,&b);
   int s=sum(l,b);
    printf("Sum of two numbers is %d",s);
    return 0;
}

int sum(int a,int b){
   return a+b;
}