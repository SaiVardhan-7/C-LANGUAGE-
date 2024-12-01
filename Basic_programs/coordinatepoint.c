#include<stdio.h>
int main(){
/*Given a point (x, y), write a program to find
out if it lies on the x-axis, y-axis or at the origin, viz.
(0, 0). */
int x,y;
printf("Enter x and y coordinates");
scanf("%d%d",&x,&y);

if(x==0 && y!=0){
    printf("(%d,%d) is on Y-axis",x,y);
}    
else if(x!=0 && y==0){
    printf("(%d,%d) is on X-axis",x,y);
}    
else if(x==0 && y==0){
    printf("(%d,%d) is on Origin",x,y); 
}    
else if(x!=0 && y!=0){
    printf("(%d,%d) is not on coordinate axes",x,y);         
}
 return 0;    
}