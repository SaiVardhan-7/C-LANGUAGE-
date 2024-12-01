#include<stdio.h>
#include<stdbool.h>
// Sorting -> To keep elements in ascending order.
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true)  break;
    }
    printf("Sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}