#include<stdio.h>
int main(){
/*write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.*/
    int r,c,arr[r][c];
    printf("Enter no.of rows and columns:\n");
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=10;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           printf("%d ",arr[i][j]);
        }
    }
    return 0;
}