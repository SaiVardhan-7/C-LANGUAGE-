#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int factors(int a,int b){
    for(int i=min(a,b);i>1;i--){
        if(a%i==0 && b%i==0){
            printf("%d",i);
            break;
        }
    }
}
int main(){
    int a,b;
    printf("Enter a and b values:");
    scanf("%d%d",&a,&b);
    factors(a,b);
    return 0;
}