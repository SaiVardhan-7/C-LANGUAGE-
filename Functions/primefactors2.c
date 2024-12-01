#include<stdio.h>
int main(){
    int n,count;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        count=0;
        for(int j=1;j<n;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            if(n%i==0){
                printf("%d  ",i);
            }
        }
    }
    return 0;
}