#include<stdio.h>
int main(){
  /*: Print the given pattern
       *
     * * *
   * * * * *
 * * * * * * *   */
int n;
printf("Enter 2*number :");
scanf("%d",&n);
for(int i=1;i<=n;i+=2){
    for(int j=1;j<=n;j++){
        if(i+j>=n+1 && i+j<=2*n){
            printf("* ");
        }
        else if(i>n || i+j<n+1){
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}