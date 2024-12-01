#include<stdio.h>
int reverse(int arr[],int s,int e){
     for(int i=s,j=e;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    //Reverse the elements of indices from x to y in the array  (copyreverse2.c)
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int s,e;
    printf("Enter start and end to reverse the array");
    scanf("%d%d",&s,&e);
    reverse(arr,s,e);
    for(int i=0;i<10;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}