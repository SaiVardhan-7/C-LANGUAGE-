#include<stdio.h>
int main(){
/*Write a program to print the multiplication of two matrices given by the user.*/
  int r,c,p,q,sum;
  printf("Enter no.of rows and columns of 1st matrix:");
  scanf("%d%d",&r,&c);
  int arr[r][c];
  printf("Enter elements of 1st matrix:\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
  }
  printf("Enter no.of rows and columns of 2nd matrix:");
  scanf("%d%d",&p,&q);
  int brr[p][q];
  printf("Enter elements of 2nd matrix:\n");
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        scanf("%d",&brr[i][j]);
    }
  }
  int crr[r][q];
  printf("Multiplication of two matrices is:\n"); 
  if(c==p){
    for(int i=0;i<r;i++){
       for(int j=0;j<q;j++){ 
          sum=0;
          for(int k=0;k<c;k++){
            sum+=(arr[i][k]*brr[k][j]);
          }  
          crr[i][j]=sum; 
       }
    }
  for(int i=0;i<r;i++){
       for(int j=0;j<q;j++){ 
          printf("%d ",crr[i][j]);
    }
    printf("\n");
  }
  }
  else{
    printf("Cannot multiply");
  }
  return 0;
}  