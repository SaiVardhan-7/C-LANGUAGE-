#include<stdio.h>
int main(){
/* Print the given pattern
1
A B
1 2 3
A B C D
1 2 3 4 5*/
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       if(i%2!=0){
           for(int j=1;j<=i;j++){
              printf("%d ",j);
           }
       }
       else{
           for(int z=65;z<=65+i-1;z++){
              printf("%c ",z);
           }
       }     
       printf("\n");
   }
    return 0;
}