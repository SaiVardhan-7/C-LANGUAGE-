#include<stdio.h>
int main(){
    /*Find the difference between the sum of elements at even indices
    to the sum of elements at odd indices.*/
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int esum=0,osum=0;
    for(int i=0;i<10;i++){
        if(i%2==0){
            esum+=arr[i];
        }
        else{
            osum+=arr[i];
        }
    }
    printf("differnce of esum and osum is %d",esum-osum);
    return 0;
}