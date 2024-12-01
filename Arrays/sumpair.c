#include<stdio.h>
int main(){
    /*Find the total number of pairs in the Array whose 
      sum is equal to the given value x*/
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x,pairs=0;
    printf("Enter x:");
    scanf("%d",&x);
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]+arr[j]==x){
                pairs++;
            }
        }
    }
    printf("pairs=%d",pairs);
    return 0;
}