#include<stdio.h>
int maze(int r, int c){
    int rightways=0,downways=0;
    if(r==1 && c==1)  return 1;
    if(r==1){
        rightways+=maze(r,c-1);
    } 
    if(c==1){
        downways+=maze(r-1,c);
    }
    if(r>1 && c>1){
        rightways+=maze(r,c-1);
        downways+=maze(r-1,c);
    }
    int noofways = rightways + downways;
    return noofways; 
}
int main(){
    int r,c;
    printf("Enter no of rows and columns of the maze:");
    scanf("%d%d",&r,&c);
    int totalways = maze(r,c);
    printf("Total number of ways = %d",totalways);
    return 0;
}