#include<stdio.h>
int fact(int a);
int combination(int n,int r);
int main(){
    /* 1
       1 1
       1 2 1
       1 3 3 1
       1 4 6 4 1       */
    int n,r;
    printf("Enter n and r values:");
    scanf("%d%d",&n,&r);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
           printf("%d ",combination(i,j)); 
        }
        printf("\n");
    }
    return 0;
}
int fact(int a){
    int f=1;
     for(int i=1;i<=a;i++){
         f=f*i;
     }
     return f;
}
int combination(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}