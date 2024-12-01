#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    printf("Enter a and b values:");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("swap a=%d and b=%d",a,b);

    return 0;
}
void swap(int *a,int *b){
    int t = *a;
       *a = *b;
       *b = t;
    return;    
}