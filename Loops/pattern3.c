#include<stdio.h>
int main(){
/*: Print the given pattern
1 2 3 4
1 2 3
1 2
1 */
 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 for(int i=n;i>0;i--){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
 } 
    return 0;
}