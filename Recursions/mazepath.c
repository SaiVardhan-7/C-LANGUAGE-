#include<stdio.h>
int maze(int cr, int cc, int er, int ec){
       int rightways=0,downways=0;
       if(cr==er && cc==ec)    return 1;
       if(cr==er){
        rightways+=maze(cr,cc+1,er,ec);
       }
       if(cc==ec){
        downways+=maze(cr+1,cc,er,ec);
       }
       if(cr<er && cc<ec){
        rightways+=maze(cr,cc+1,er,ec);
        downways+=maze(cr+1,cc,er,ec);
       }
       int noofways = rightways + downways;
       return noofways;
}
int main(){
    int r,c;
    printf("Enter no of rows and columns of the maze:");
    scanf("%d%d",&r,&c);
    int totalways=maze(1,1,r,c);
    printf("Total number of ways = %d",totalways);
    return 0;
}