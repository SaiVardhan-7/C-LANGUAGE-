#include<stdio.h>
int main(){
/* Print the given pattern
      A
    A B
  A B C
A B C D             */
int n,a=65;
printf("Enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++){
      if(i+j>=n+1 && i+j<=2*n){
        printf(" %c",a);
        a++;
      }
      else if(i>n || i+j<n+1){
        printf("  ");
      }
   }
   printf("\n");
}
    return 0;
}