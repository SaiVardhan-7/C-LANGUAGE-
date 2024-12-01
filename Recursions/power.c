#include<stdio.h>
int power(int a,int b);
int main(){
    int a,b;
    printf("Enter base and index:");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==0 && b==0){
        printf("Not defined");
    }
    else{
    int p=power(a,b);
    printf("Power=%d",p);
    }
    return 0;
}
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}