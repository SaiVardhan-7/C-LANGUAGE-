#include<stdio.h>
int main(){
    int x,n;
    printf("Enter x and n value:");
    scanf("%d%d",&x,&n);
    int f,p;
    float sum=1;
    for(int i=1;i<n;i++){
        f=1;
        for(int j=1;j<=i;j++){
            f*=j;
            p=1;
            for(int k=1;k<=i;k++){
                p*=x;
            }
        }
        sum+=(float)p/f; 
    }
    printf("e^%d = %f",n,sum);
    return 0;
}