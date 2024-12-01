#include<stdio.h>
int main(){
/*: Print the given pattern
   * * * *
  * * * *
 * * * *
* * * *   */
int n;
printf("Enter a number:");
scanf("%d",&n);
for(int i=1;i<=2*n;i++){
    for(int j=1;j<=2*n;j++){
       if(i+j>=n+1 && i+j<=2*n && i<=n){
        printf("* ");
       }
       else{
        printf(" ");
       }
    }
    printf("\n");
}
    return 0;
}