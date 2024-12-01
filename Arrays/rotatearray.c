#include<stdio.h>
int reverse(int arr[],int s,int e){
  for(int i=s,j=e;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
  }
}
int main(){
  /*Rotate the given array 'a' by k steps, where k is non-negative.
    Note: k can be greater than n as well where n is the size of array 'a' 
    procedure:
    1. If k>n then k=k%n
    2. reverses(arr,0,n-1)
    3. reverse(arr,0,k-1)
    4. reverse(arr,k,n-1)    */
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10,k;
    printf("Enter no.of rotation");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<10;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}