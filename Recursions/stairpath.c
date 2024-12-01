#include<stdio.h>
int stair(int n){
    if(n<=2) return n;
    return stair(n-1)+stair(n-2);
}
int main(){                               //single step, double step
    int n;                                //no.of ways, so that the person reaches nth stair.
    printf("Enter stair number:");
    scanf("%d",&n);
    int ways=stair(n);
    printf("Number of ways=%d",ways);
    return 0;
}
