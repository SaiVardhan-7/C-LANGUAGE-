#include<stdio.h>
void reverse(int arr[]){
    
    for(int i=0,j=9;i<j;i++,j--){       
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    /*Write a program to reverse the array without using any extra array.*/
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}