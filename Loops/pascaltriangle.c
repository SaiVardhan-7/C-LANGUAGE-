#include<stdio.h>
int main(){
    int c=1,n;
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       for(int j=0;j<=n-i;j++){
          printf(" ");
       }   
       for(int k=0;k<=i;k++){
          if(k==0)   c = 1;
          else   c=c*(i-k+1)/k;
          printf("%d ",c);
       }
       printf("\n");
    }
    return 0;
}    
