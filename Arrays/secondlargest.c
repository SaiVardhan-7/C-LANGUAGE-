#include<stdio.h>
#include<limits.h>
int main(){
    /*Find the second largest element in the given array.*/
    int arr[10]={1,298,3,4,5,786,298,8,9,786 };
    int max=INT_MIN,smax=INT_MIN;      // INT_MIN = -2147483648
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("largest=%d secondlargest=%d",max,smax);
    return 0;
}