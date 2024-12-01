#include<stdio.h>
int main(){
    /*Given a matrix 'a' of dimension nxm and 2 coordinates (l1,r1) and (l2,r2).
    Return the sum of the rectangle from (l1,r1) to (l2,r2).*/
    int l,r,l1,r1,l2,r2;
    printf("Enter no.of rows and columns:");
    scanf("%d%d",&l,&r);
    int arr[l][r];
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<l;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter vertices of rectangle of (l1,r1) to (l2,r2)");
    scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
    int sum=0;
    for(int i=l1;i<l2;i++){
        for(int j=r1;j<r2;j++){
            sum+=arr[i][j];
        }
    }
    printf("Sum of rectangle from (l1,r1) to (l2,r2) is %d",sum);
    return 0;
}