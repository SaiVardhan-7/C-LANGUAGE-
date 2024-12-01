#include<stdio.h>
#include<math.h>
int main(){
   /* Write a program to print out all Armstrong numbers between 1 and 500. 
       
   If sum of cubes of each digit of the number is equal to the number  
   itself, then the number is called an Armstrong number.*/
  
   long int n,N,ld,ln,sum=0,count=0;
   printf("Enter a number:");
   scanf("%ld",&n);
   N=n;
   while(n!=0){                                  //vs code not working properly for this program
    ld=n%10;
    n=n/10;
    if(ld>=0 && ld<=9){
      count++;
    }
   }
   while(N!=0){
     ln=N%10;
     if(ln>=0 && ln<=9){
     sum = sum + pow(ln,count);
     }
     N=N/10;
      
   }
   printf("sum=%ld",sum);
   
  
   return 0;
}