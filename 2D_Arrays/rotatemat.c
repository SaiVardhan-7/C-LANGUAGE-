#include<stdio.h>
int main(){
/*Write a program to rotate a matrix 90 degrees clockwise.(Leetcode-48)*/
  int r,c;
  printf("Enter no.of rows and columns:");
  scanf("%d%d",&r,&c);
  int arr[r][c];
  printf("Enter elements of the matrix:\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
  }
  printf("After rotating 90 degrees the matrix is:\n"); 
  for(int i=0;i<c;i++){
    for(int j=0;j>=0;j--){ 
        printf("%d ",arr[j][i]);
    }
    printf("\n");
  }
  return 0;
}  