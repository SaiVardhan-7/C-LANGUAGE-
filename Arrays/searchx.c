#include<stdio.h>
int main(){
    /*Given an array containing elements from 1 to 100 except one element
    in this range is missing. Find the missing element.*/
    int arr[99],sum=0,sumN,x;
    for(int i=0;i<99;i++){
        arr[i]=i+1;
        sum+=arr[i];
    }
    sumN=100*(100+1)/2;
    x=sumN-sum;
    printf("x=%d",x);
    return 0;
}