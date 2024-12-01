#include<stdio.h>
int main(){
// Print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.
int n,sum=0;
printf("Enter a number");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2==0){
        sum = sum - i;
    }
    else{
        sum = sum + i;
    }
}
printf("Sum of series upto n is %d",sum);

return 0;
}
