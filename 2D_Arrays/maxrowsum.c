#include<stdio.h>
int main(){
/*Write a program to print the row number having the 
  maximum sum in a given matrix.*/
  int r,c,sum=0,index;
  printf("Enter no.of rows and columns:");
  scanf("%d%d",&r,&c);
  int arr[r][c];
  printf("Enter elements of the matrix:\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
  }
  int maxsum=arr[0][0];
  for(int i=0;i<r;i++){
    sum=0;
    for(int j=0;j<c;j++){
        sum+=arr[i][j];
    }
    if(maxsum<sum){
        maxsum=sum;
        index=i;
    }
  }
  printf("Row %d has maxsum of %d",index,maxsum);
  return 0;
}