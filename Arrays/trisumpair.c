#include<stdio.h>
int main(){
    /*Find the total number of triplets in the Array whose 
      sum is equal to the given value x*/
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x,triplet=0;
    printf("Enter x:");
    scanf("%d",&x);
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                   triplet++;
                }
            }
        }
    }
    printf("pairs=%d",triplet);
    return 0;
}