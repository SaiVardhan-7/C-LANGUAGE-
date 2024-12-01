#include<stdio.h>
int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10];
    for(int i=0,j=9;i<10 && j>=0;i++,j--){       
        arr2[j]=arr1[i];
    }
    /*Method 2
      for(int i=0;i<10;i++){       
        arr2[i]=arr1[10-i];
    }
    */
    for(int i=0;i<10;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}