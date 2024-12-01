#include<stdio.h>
int main(){
    /*: Print the given pattern
    1
    1 3
    1 3 5
    1 3 5 7*/
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2){          
            printf("%d ",j);
        }
        printf("\n");
    } 
    return 0;
}