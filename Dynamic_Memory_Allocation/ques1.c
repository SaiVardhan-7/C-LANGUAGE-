#include<stdio.h>
#include<stdlib.h>
/*Write a program to find the sum of a 1D array using malloc()*/
int main(){
    int n,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
        sum+=*(ptr+i);
    }
    printf("Sum of the array=%d",sum);
    return 0;
}