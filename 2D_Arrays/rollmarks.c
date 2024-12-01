#include<stdio.h>
int main(){
/*Write a program to store roll number and marks obtained 
by 4 students side by side in a matrix.*/
    int arr[4][2];
    printf("Enter roll no and marks of the student:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
           printf("%d ",arr[i][j]);
        }
    }
    return 0;
}