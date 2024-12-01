#include<stdio.h>

int main(){
    /*: If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine how much profit he
made or loss he incurred. */

 int sp,cp;
 printf("Enter the selling price:");
 scanf("%d",&sp);
 printf("Enter the cost price:");
 scanf("%d",&cp);
 if(sp>cp){
    printf("Profit upto %d",sp-cp);
 } 
 else if(sp==cp){
    printf("No profit, No loss");
 }  
 else{
    printf("Loss upto %d",cp-sp);
 }

 return 0;
}