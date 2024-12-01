#include<stdio.h>
#include<stdlib.h>
/*Write a program to implement realloc().*/
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    printf("Enter new size of the array:");
    scanf("%d",&n);
    ptr=(int *)realloc(ptr,n*sizeof(int));
    printf("Enter the new elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}