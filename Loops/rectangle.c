#include<stdio.h>
int main(){
  // WAP to print rectangle using stars by nested-loops
  int l,b;
  printf("Enter a lengh and breadth of a rectangle:");
  scanf("%d%d",&l,&b);
  for(int i=1;i<=b;i++){
     for(int j=1;j<=l;j++){
        printf("*",i);
     }
     printf("\n");
  }
  return 0;
}