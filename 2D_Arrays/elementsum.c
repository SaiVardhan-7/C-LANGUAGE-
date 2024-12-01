#include<stdio.h>
int main(){
    int r,c,sum=0;
    printf("Enter no.of rows and columns:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    printf("Sum of elements of the matrix is %d",sum);
    return 0;
}