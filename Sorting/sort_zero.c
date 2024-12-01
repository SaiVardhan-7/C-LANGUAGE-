#include<stdio.h>
#include<stdbool.h>
/* Given an integer array arr, move all 0's to the 
end of it while maintaining the relative order of the 
non-zero elements.
Note that you must do this in-place without making a 
copy of the array.*/
int main(){
    int arr[9]={5,4,0,7,0,2,0,1,8};
    int n=9;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
           if(arr[j]==0){
             int temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
           }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}