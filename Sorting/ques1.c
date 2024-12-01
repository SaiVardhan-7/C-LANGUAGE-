#include<stdio.h>
/*Given an array of digits (values are from 0 to 
9), the task is to find the minimum possible sum of 
two numbers formed from digits of the array. 
Please note that all digits of the given array must 
be used to form the two numbers.

arr=5 3 1 2 4               |   if arr= 1 2 3 4 4    swap other two numbers from last
1 2 3 4 5                   |   1 2 3 4 4
    +       =24699->output  |       +       =24778->output
1 2 3 5 4                   |   1 2 4 3 4                                     */
int number(int n, int arr[]);
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    // Here sorting will be done
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int minnum=number(n,arr);
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=arr[i-1]){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            break;
        }
    }
    int secondmin=number(n,arr);
    int sum = minnum + secondmin;
    printf("The minimum possible sum of two numbers formed from digits of the array : %d",sum);
    return 0;
}
int number(int n, int arr[]){
    int minnum=0;
    for(int i=0;i<n;i++){
        minnum=minnum*10+arr[i];
    }
    return minnum;
}