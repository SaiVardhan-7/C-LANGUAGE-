#include<stdio.h>
int main(){
/*Given a positive integer 'n' generate nxn matrix filled with 
  elements from 1 to n*n in spiral order.(Leetcode-59)*/
  int n,a=1;
  printf("Enter order of square matrix:");
  scanf("%d",&n);
  int arr[n][n];
  int minr=0,maxr=n-1,minc=0,maxc=n-1;
  int count=0,tne=n*n;
  while(count<tne){
    for(int j=minc;j<=maxc && count<tne;j++){
      arr[minr][j]=a++;
      count++;    
    }
    minr++;
    for(int i=minr;i<=maxr && count<tne;i++){
        arr[i][maxc]=a++;
        count++;
    }
    maxc--;
    for(int j=maxc;j>=minc && count<tne;j--){
        arr[maxr][j]=a++;
        count++;
    }
    maxr--;
    for(int i=maxr;i>=minr && count<tne;i--){
        arr[i][minc]=a++;
        count++;
    }
    minc++;
  }
  printf("\nSpiral matrix:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%4d",arr[i][j]);
    }
    printf("\n");
  }
    return 0;
}