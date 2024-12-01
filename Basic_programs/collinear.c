#include<stdio.h>
int main()
{
  /* Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three
points fall on one straight line. */

int x1,x2,x3,y1,y2,y3;
float m1,m2;

printf("Enter the points");
scanf("%d%d",&x1,&y1);
scanf("%d%d",&x2,&y2);
scanf("%d%d",&x3,&y3);

m1 = (y2-y1)/(x2-x1);
m2 = (y3-y1)/(x3-x1);
if(m1==m2){
    printf("Three points lie on same line");
}
else{
    printf("Thrice of the points are not on same line");
}

    return 0;
}
