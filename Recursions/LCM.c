#include<stdio.h>
int gcd(int a,int b){
    if(b==0)  return a;
    else    return gcd(b,a%b);
}
int main(){
    int a,b;
    printf("Enter a and b values:");
    scanf("%d%d",&a,&b);
    int lcm=(a*b)/gcd(a,b);
    printf("lcm=%d",lcm);
    return 0;
}
