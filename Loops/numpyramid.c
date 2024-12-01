/*#include<stdio.h>
int main(){
   Print the given pattern
       1
     1 2 3
   1 2 3 4 5
 1 2 3 4 5 6 7   
int n;
printf("Enter 2*number :");
scanf("%d",&n);
for(int i=1;i<=n;i+=2){
    for(int j=1;j<=n;j++){
        if(i+j>=n+1 && i+j<=2*n){ 
            printf("& ");
        }
        else if(i>n || i+j<n+1){
            printf(" ");
        }
    }
    printf("\n");
}
    return 0;
}*/
#include<stdio.h>
int main(){
   /*: Print the given pattern
    1
    1 2
    1 2 3
    1 2 3 4*/
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
