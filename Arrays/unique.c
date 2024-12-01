#include<stdio.h>
#include<stdbool.h>
int main(){
/*Find the unique number in a given Array where all the elements
are being repeated twice with one value being unique*/
    int arr[7]={1,3,8,31,8,1,3};
    for(int i=0;i<7;i++){
        bool flag = false;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
               flag = true;
            }
        }
        if(flag==false){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}