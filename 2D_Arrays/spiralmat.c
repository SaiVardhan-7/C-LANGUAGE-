#include<stdio.h>
int main(){
/*Given an mxn matrix 'a', print all elements of the 
  matrix in spiral order.(Leetcode-54)
    Input       Output ---- 1 2 3 8 9 4 7 6 5   
    1 2 3       1 2 3    
    4 5 6       8 9 4     
    7 8 9       7 6 5   */
  int r,c;
  printf("Enter no.of rows and columns:");
  scanf("%d%d",&r,&c);
  printf("Enter elements of the matrix:\n");
  int arr[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
  }
  printf("Spiral order:\n");
  int minr=0,maxr=r-1,minc=0,maxc=c-1;
  int count=0,tne=r*c;
  while(count<tne){
    for(int j=minc;j<=maxc && count<tne;j++){
      printf("%d ",arr[minr][j]);
      count++;    
    }
    minr++;
    for(int i=minr;i<=maxr && count<tne;i++){
        printf("%d ",arr[i][maxc]);
        count++;
    }
    maxc--;
    for(int j=maxc;j>=minc && count<tne;j--){
        printf("%d ",arr[maxr][j]);
        count++;
    }
    maxr--;
    for(int i=maxr;i>=minr && count<tne;i--){
        printf("%d ",arr[i][minc]);
        count++;
    }
    minc++;
  }
    return 0;
}