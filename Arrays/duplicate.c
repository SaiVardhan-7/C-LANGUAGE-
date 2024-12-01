#include<stdio.h>
int main(){
    /*WAP to find a duplicate element from a given array of integers.*/
    int arr[7]={1,6,33,4,33,6,7};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[j]==arr[i]){
                printf("Duplicate element is %d\n",arr[i]);
            }
        }
    }
    return 0;
}