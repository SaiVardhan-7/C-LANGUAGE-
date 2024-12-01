#include<stdio.h>
int main(){
    /*Count the number of elements in given array greater than a given number x*/
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int count=0,x=3;
    for(int i=0;i<10;i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("no.of elements greater than x is %d",count);
    return 0;
}