#include<stdio.h>
#include<math.h>
int fact(int n){
    int f=1; 
    for(int i=1;i<=n;i++){ 
    f*=i; 
    } 
    return f;
} 
int main(){
    int n,x;
    float sum=0;
    int sign=1;
    printf("Enter x, no.of digits:"); 
    scanf("%d%d",&x,&n); 
    for(int i=1;i<=2*n-1;i+=2){
        sum+=sign*(float)(pow(x,i)/fact(i)); 
        sign*=(-1); 
    }
    printf("sin=%f",sum);
    return 0;
}
