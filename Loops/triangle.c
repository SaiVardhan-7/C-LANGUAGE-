#include<stdio.h>
int main(){
    //WAP to print a star right angled triangle
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*",i);
        }
        printf("\n");
    }
    return 0;
}