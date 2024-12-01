#include<stdio.h>
int main(){
/* Print the given pattern
1
0 1
1 0 1
0 1 0 1    */
int n,a=1;
printf("Enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if((i+j)%2==0){
            printf("1");
        }
        else{
            printf("0");
        } 
    }
    printf("\n");
}
    return 0;
}