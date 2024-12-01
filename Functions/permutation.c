#include<stdio.h>
int fact(int a);
int main(){
    int n,r;
    printf("Enter n and r values:");
    scanf("%d%d",&n,&r);
    int k=fact(n)/fact(n-r);
    printf("Permutation npr = %d",k);
    return 0;
}
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}