#include<stdio.h>
int main(){
//WAP to print sum of all the even digits of a given number.

int n,sum=0;
printf("Enter a number");
scanf("%d",&n);
while(n!=0){
   if((n%10)%2==0){
    sum=sum+n%10;
   }
   n=n/10;
}
printf("Sum of even digits in a given number is %d",sum);

    return 0;
}