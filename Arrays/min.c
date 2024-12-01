#include<stdio.h>
int main(){
    int n,min;
    printf("Enter size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Minimum=%d",min);
    return 0;
}