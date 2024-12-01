#include<stdio.h>
int main()
{   //To find a number Prime Number or not 
  int n,count=0;
  printf("Enter a number");
  scanf("%d",&n);
  for(int i=2;i<=n/2;i++){
     if(n%i==0){
        count++;
          if(count==1){
            printf("%d is not a prime number",n);
            break;
          }
     }
  }
  if(count==0){
    printf("%d is a prime number",n);
  }
 
    return 0;
}