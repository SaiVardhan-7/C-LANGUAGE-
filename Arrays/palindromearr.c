#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,5,4,3,2,1};
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]!=arr[9-i]){
            count++;
            if(count==1){
                printf("Not a palindrome");
                break;
            } 
        }
    }
    if(count==0){
        printf("It is a palindrome");
    }
    return 0;
}