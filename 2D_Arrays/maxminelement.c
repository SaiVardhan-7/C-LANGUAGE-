#include<stdio.h>
int main(){
    /*Find out the maximum and minimum element in a 2D array
    and the index of maximum element.*/
    int r,c,max,min,maxindex1,maxindex2,minindex1,minindex2;
    printf("Enter no.of rows and columns:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    max=arr[0][0];
    min=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                maxindex1=i;
                maxindex2=j;
            }  
            if(min>arr[i][j]){
                min=arr[i][j];
            }   
        }
    }
    printf("Maximum of elements of the matrix at (%d,%d) is %d\n",maxindex1,maxindex2,max);
    printf("Minimum of elements of the matrix is %d\n",min);
    return 0;
}