#include<stdio.h>
/* Given an integer array and an integer k 
where k <= size of array, We need to return the kth 
smallest element of the array.*/
int main(){
    int n,k;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the value of k:");
    scanf("%d",&k);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("kth smallest element of the array : %d",arr[k-1]);
    return 0;
}