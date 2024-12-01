#include<stdio.h>
int main(){
/*Print the given pattern
1
2 3               n=4
4 5 6
7 8 9 10       */
int n,a=1;
printf("Enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",a);
        a++;
    }
    printf("\n");
}
    return 0;
}