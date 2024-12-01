#include<stdio.h>
#define PI 3.14159265359
#define Area(r) PI*r*r 
int main(){
    int r;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    printf("Area of the circle=%f",Area(r));

    return 0;
}