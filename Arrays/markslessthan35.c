#include<stdio.h>
int main(){
    int marks[10]={95,89,31,34,56,97,24,65,54,12};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    return 0;
}