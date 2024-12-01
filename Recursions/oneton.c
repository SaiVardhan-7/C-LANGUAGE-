#include<stdio.h>
void increase(int x,int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    increase(1,n); 
    return 0;
}
void increase(int x,int n){
    if(x>n)  return;
    printf("%d\n",x);
    return increase(x+1,n);    
}