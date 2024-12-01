#include<stdio.h>
/*Given an array of integer numbers that is already sorted in non-decreasing
order, find two numbers such that they add up to a specific target number.*/
int main(){
    int n;
    printf("Enter the value of n:");      
    scanf("%d",&n);
    int arr[n];            // Sorting -> Ascending order
    int target;
    printf("Enter the target to add two numbers:");
    scanf("%d",&target);
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("Sum of %d and %d = target",arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}