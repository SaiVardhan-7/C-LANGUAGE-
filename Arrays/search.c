#include<stdio.h>
#include<stdbool.h>
int main(){
    /*Given array and a number x. Find out if x lies in 
    the array or not if yes then print the index*/
    int arr[7]={1,2,3,4,5,5,7};
    int x,idx=-1;
    bool flag=false;
    printf("Enter a number to search:");
    scanf("%d",&x);
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            flag=true;
            idx=i;
            break;
        }
    } 
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and its index is %d",x,idx);
    }
    return 0;
}