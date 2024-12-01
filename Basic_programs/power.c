#include<stdio.h>
int main(){
  int a,b,power=1;
  printf("Enter a and b values:");
  scanf("%d%d",&a,&b);
  for(int i=1;i<=b;i++){
     power = power*a;
  }
  printf("%d to the power of %d is %d",a,b,power);

  return 0;
}