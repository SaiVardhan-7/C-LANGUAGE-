#include<stdio.h>
int main(){
    int n,arr[n],sum=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("Sum of elements of the array is %d",sum);
    return 0;
}