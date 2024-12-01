#include<stdio.h>
int main(){
 /* Print the given pattern
      # # * # #
      # # * # #
      * * * * *             n=5
      # # * # #
      # # * # #   */
      int n;
      printf("Enter a number:");
      scanf("%d",&n);
      for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++){
             if(i==n/2+1 || j==n/2+1){
                printf("* ");
             }  
             else{
               printf("# ");
             }
          }
          printf("\n");
      }
    return 0;
}