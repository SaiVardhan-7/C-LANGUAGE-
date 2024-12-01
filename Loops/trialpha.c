#include<stdio.h>
int main(){
    /* Print the given pattern
    A
    A B
    A B C
    A B C D*/
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=65;i<=65+n;i++){
        for(int j=65;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}