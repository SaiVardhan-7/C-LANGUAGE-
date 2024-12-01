#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        count=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            printf("%d ",i);
        }
    }
    return 0;
}