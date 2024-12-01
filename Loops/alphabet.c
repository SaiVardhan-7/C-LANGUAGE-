#include<stdio.h>
int main(){
    /* Print the given pattern
    A B C D
    A B C D
    A B C D
    A B C D*/
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       for(int j=65;j<=65+n;j++){
          printf("%c ",j);
       }
       printf("\n");
   }
    return 0;
}