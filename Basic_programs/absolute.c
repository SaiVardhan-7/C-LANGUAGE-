#include<stdio.h>
int main()
{ //Take integer input and print the absolute value of that integer
  int n;
  printf("Enter a number");
  scanf("%d",n);
  if(n<0){
    n=n*(-1);
  }
  printf("Absolute number is %d",n);
  
  return 0;
}
