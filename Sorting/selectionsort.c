#include<stdio.h>
#include<limits.h>
int main(){
    int n,min,minidx;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){ 
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        min = INT_MAX;
        minidx = -1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
               min=arr[j];
               minidx=j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
        
    }
    printf("Sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}