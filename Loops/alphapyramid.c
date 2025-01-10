#include<stdio.h>
int main(){
  /*: Print the given pattern
       A
     A B C
   A B C D E
 A B C D E F G   */
int n;
printf("Enter 2*number :");
scanf("%d",&n);
for(int i=1;i<=n;i+=2){
    char ch='A';
    for(int j=1;j<=n;j++){
        if(i+j>=n+1 && i+j<=2*n){ 
            printf("%c ",ch);
            ch++;
        }
        else if(i>n || i+j<n+1){
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}
