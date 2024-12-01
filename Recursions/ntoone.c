#include<stdio.h>
int decrease(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    decrease(n);
    return 0;
}
int decrease(int n){
    if(n==0)  return 0;
    printf("%d\n",n);
    decrease(n-1);
}