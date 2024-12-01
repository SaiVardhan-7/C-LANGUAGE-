#include<stdio.h>
int main(){
    int x,n;
    printf("Enter x and n value:");
    scanf("%d%d",&x,&n);
    float f,p,sum=0;
    for(int i=1;i<=2*n-1;i+=2){
        f=1;
        for(int j=1;j<=i;j++){
           f*=j;
           p=1;
           for(int k=1;k<=i;k++){
              p*=x;
           }
        }
        for(int m=1;m<=n;m++){
           if(m%2==0){
            sum-=p/f;
           }
           else{
            sum+=p/f;
           }
        }
    }
    printf("sin = %f",sum);
    return 0;
}