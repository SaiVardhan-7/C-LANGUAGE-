#include<stdio.h>
/* A positive integer is entered through the
keyboard. Write a function to obtain the prime
factors of this number.   */
int factors(int n);
int prime(int m);
int main(){
    
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   factors(n);
   return 0;
}
int factors(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
          prime(i);
        }
    }
}
int prime(int m){
    int count=0;
    for(int i=2;i<m/2;i++){
        if(m%i==0){
            count++;
            if(count==1){
                break;
            }
        }
    }
    if(count==0){
        printf("%d ",m);
    }
}