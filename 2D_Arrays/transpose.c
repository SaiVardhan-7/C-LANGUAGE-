#include<stdio.h>
int main(){
/*Given a program to print the transpose of the matrix
 entered by the user.(Leetcode-867)*/
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
  printf("Transpose of the matrix is:\n"); 
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
  }
  return 0;
}  