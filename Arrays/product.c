#include<stdio.h>
int main(){
    int n,arr[n],prod=1;
    printf("Enter size of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        prod=prod*arr[i];
    }
    printf("Product of elements of the array is %d",prod);
    return 0;
}