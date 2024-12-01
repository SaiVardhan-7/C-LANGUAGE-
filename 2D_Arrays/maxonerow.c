#include<stdio.h>
int main(){
/*Given a matrix having 0-1 only, find the row with the maximum number of 1's*/
  int r,c,count,index;
  printf("Enter no.of rows and columns:");
  scanf("%d%d",&r,&c);
  int arr[r][c];
  printf("Enter elements of the matrix:\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
  }
  int maxcount=0;
  for(int i=0;i<r;i++){
    count=0;
    for(int j=0;j<c;j++){
        if(arr[i][j]==1){
            count++;
        }
    }
    if(maxcount<count){
        maxcount=count;
        index=i;
    }
  }
  printf("Row %d has max of %d 1's",index,maxcount);
  return 0;
}