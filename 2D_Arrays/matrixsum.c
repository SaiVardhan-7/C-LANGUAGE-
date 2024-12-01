#include<stdio.h>
int elements(int a,int b,int arr[a][b]);
int main(){
    int r,c;
    printf("Enter no.of rows and columns:");
    scanf("%d%d",&r,&c);
    int arr1[r][c],arr2[r][c],arr3[r][c];
    printf("Enter the elements of first matrix:\n");
    elements(r,c,arr1);
    printf("Enter the elements of second matrix:\n");
    elements(r,c,arr2);
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Addition of two matrices\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int elements(int a,int b,int arr[a][b]){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }   
}