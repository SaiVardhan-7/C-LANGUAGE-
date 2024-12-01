#include<stdio.h>
int main(){
  int n;
  printf("Enter length of a side:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("*",i);
    }
    printf("\n");
  }


    return 0;
}