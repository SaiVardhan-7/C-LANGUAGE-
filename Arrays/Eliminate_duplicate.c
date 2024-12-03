#include<stdio.h>
int main(){
    /*WAP to find a duplicate element from a given array of integers.*/
    int arr[7]={1,6,33,4,33,6,7};
    int  n=7;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                for(int k=j;k<n-1;k++){
                   arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    return 0;
}
