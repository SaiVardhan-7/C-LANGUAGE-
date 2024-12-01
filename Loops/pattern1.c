#include<stdio.h>
int main(){
   /*Print the given pattern
   1 2 3 4
   1 2 3 4           a=4,b=4
   1 2 3 4
   1 2 3 4
   Number Square*/

    int a,b;
    printf("Enter length and breadth:");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++){
        for(int j=1;j<=a;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}